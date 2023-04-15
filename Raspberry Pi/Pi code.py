## I think it is 8*8 LED sensors code.
import RPi.GPIO as IO
import time

IO.setwarnings(False)

col = [12, 22, 27, 25, 17, 24, 23, 18] pin number
row = [21, 20, 26, 16, 19, 13, 6, 5]
IO.setmode(IO.BCM)

for i in range(len(row)):
    IO.setup(row[i], IO.OUT)
for i in range(len(col)):
    IO.setup(col[i], IO.OUT)

colValue = [
    [0, 1, 1, 1, 1, 1, 1, 1],
    [1, 0, 1, 1, 1, 1, 1, 1],
    [1, 1, 0, 1, 1, 1, 1, 1],
    [1, 1, 1, 0, 1, 1, 1, 1],
    [1, 1, 1, 1, 0, 1, 1, 1],
    [1, 1, 1, 1, 1, 0, 1, 1],
    [1, 1, 1, 1, 1, 1, 0, 1],
    [1, 1, 1, 1, 1, 1, 1, 0],
]

I = [
    [0, 0, 0, 0, 0, 0, 0, 0],
    [1, 1, 0, 0, 0, 0, 1, 1],
    [1, 1, 0, 0, 0, 0, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 1, 1, 1, 1, 1, 1],
    [1, 1, 0, 0, 0, 0, 1, 1],
    [1, 1, 0, 0, 0, 0, 1, 1],
    [0, 0, 0, 0, 0, 0, 0, 0],
]
try:
    while 1:
        for x in range(8):
            IO.output(col, colValue[x])
            IO.output(row, I[x])
            time.sleep(0.0002)
except KeyboardInterrupt:
    IO.cleanup()



#Ultrasonic sensor HC-SR04
#Link = https://tutorials-raspberrypi.com/raspberry-pi-ultrasonic-sensor-hc-sr04/

import RPi.GPIO as GPIO
import time

GPIO.setmode(GPIO.BCM)

#set GPIO Pins
GPIO_TRIGGER = 18
GPIO_ECHO = 24

#set GPIO direction (IN / OUT)
GPIO.setup(GPIO_TRIGGER, GPIO.OUT)
GPIO.setup(GPIO_ECHO, GPIO.IN)

def distance():
    # set Trigger to HIGH
    GPIO.output(GPIO_TRIGGER, True)

    # set Trigger after 0.01ms to LOW
    time.sleep(0.00001)
    GPIO.output(GPIO_TRIGGER, False)

    StartTime = time.time()
    StopTime = time.time()

    # save StartTime
    while GPIO.input(GPIO_ECHO) == 0:
        StartTime = time.time()

    # save time of arrival
    while GPIO.input(GPIO_ECHO) == 1:
        StopTime = time.time()

    # time difference between start and arrival
    TimeElapsed = StopTime - StartTime
    # multiply with the sonic speed (34300 cm/s)
    # and divide by 2, because there and back
    distance = (TimeElapsed * 34300) / 2

    return distance

if __name__ == '__main__':
    try:
        while True:
            dist = distance()
            print ("Measured Distance = %.1f cm" % dist)
            time.sleep(1)

        # Reset by pressing CTRL + C
    except KeyboardInterrupt:
        print("Measurement stopped by User")
        GPIO.cleanup()

#Temperature Sensors
#https://www.thegeekpub.com/236867/using-the-dht11-temperature-sensor-with-the-raspberry-pi/
# DHT11/22 Sensor Vcc+ to Raspberry Pi 5V
# DHT11/22 Sensor GND to Raspberry Pi GND
# DHT11/22 Sensor Signal to Raspberry Pi PIN 7 (GPIO PIN 4)

import Adafruit_DHT #This line defines the sensor object we will use
import time

DHT_SENSOR = Adafruit_DHT.DHT11
DHT_PIN = 4

while True:
    humidity, temperature = Adafruit_DHT.read(DHT_SENSOR, DHT_PIN)
    if humidity is not None and temperature is not None:
        print("Temp={0:0.1f}C Humidity={1:0.1f}%".format(temperature, humidity))
    else:
        print("Sensor failure. Check wiring.");
    time.sleep(3);

#Servo Motors
#https://tutorials-raspberrypi.com/raspberry-pi-servo-motor-control/

import RPi.GPIO as GPIO
import time

servoPIN = 17
GPIO.setmode(GPIO.BCM)
GPIO.setup(servoPIN, GPIO.OUT)

p = GPIO.PWM(servoPIN, 50) # GPIO 17 for PWM with 50Hz
p.start(2.5) # 100Hz = 1.0 mS position = 0; 1.5 = 90, 2.0 ms = 180
try:
  while True:
    p.ChangeDutyCycle(5)
    time.sleep(0.5)
    p.ChangeDutyCycle(7.5)
    time.sleep(0.5)
    p.ChangeDutyCycle(10)
    time.sleep(0.5)
    p.ChangeDutyCycle(12.5)
    time.sleep(0.5)
    p.ChangeDutyCycle(10)
    time.sleep(0.5)
    p.ChangeDutyCycle(7.5)
    time.sleep(0.5)
    p.ChangeDutyCycle(5)
    time.sleep(0.5)
    p.ChangeDutyCycle(2.5)
    time.sleep(0.5)
except KeyboardInterrupt:
  p.stop()
  GPIO.cleanup()

#Make the LED blink
#https://roboticsbackend.com/raspberry-pi-control-led-python-3/
import RPi.GPIO as GPIO
import time
LED_PIN = 17
GPIO.setmode(GPIO.BCM)
GPIO.setup(LED_PIN, GPIO.OUT)
while True:
    GPIO.output(LED_PIN, GPIO.HIGH)
    time.sleep(1)
    GPIO.output(LED_PIN, GPIO.LOW)
    time.sleep(1)
GPIO.cleanup()

#Buzzer
#https://www.instructables.com/Raspberry-Pi-Tutorial-How-to-Use-a-Buzzer/
#https://www.freva.com/buzzer-on-raspberry-pi-generating-beeps/
import RPi.GPIO as GPIO
from time import sleep

#Disable warnings (optional)
GPIO.setwarnings(False)

#Select GPIO mode
GPIO.setmode(GPIO.BCM)

#Set buzzer - pin 23 as output
buzzer=23

GPIO.setup(buzzer,GPIO.OUT)
#Run forever loop
while True:
    GPIO.output(buzzer,GPIO.HIGH)
    print ("Beep")
    sleep(0.5) # Delay in seconds
    GPIO.output(buzzer,GPIO.LOW)
    print ("No Beep")
    sleep(0.5)

#PIR Motion Sensor
#https://maker.pro/raspberry-pi/tutorial/how-to-interface-a-pir-motion-sensor-with-raspberry-pi-gpio
#https://www.freva.com/hc-sr501-pir-motion-sensor-on-raspberry-pi/

import RPi.GPIO as GPIO
import time

GPIO.setwarnings(False)

GPIO.setmode(GPIO.BOARD)
GPIO.setup(11, GPIO.IN)         #Read output from PIR motion sensor
GPIO.setup(3, GPIO.OUT)         #LED output pin

while True:
    i=GPIO.input(11)
    if i==0:                 #When output from motion sensor is LOW
        print "No intruders",i
        GPIO.output(3, 0)  #Turn OFF LED
        time.sleep(0.1)
        elif i==1:               #When output from motion sensor is HIGH
            print "Intruder detected",i
            GPIO.output(3, 1)  #Turn ON LED
            time.sleep(0.1)


#DC Motor
#https://www.theengineeringprojects.com/2022/04/control-dc-motor-with-raspberry-pi-4-using-python.html
import RPi.GPIO as GPIO
from time import sleep

GPIO.setmode (GPIO.BOARD)

GPIO.setup(03, GPIO.OUT)
GPIO.setup(05, GPIO.OUT)
GPIO.setup(07, GPIO.OUT)

p = GPIO.PWM(07,100)
p.start(0)


p.ChangeDutyCycle(25)

GPIO.output (07, True)
sleep(5)

GPIO.output (07, False)
GPIO.output (03, False)
GPIO.output (05, True)
p.ChangeDutyCycle(50)

GPIO.output (07, True)
sleep(5)

GPIO.output (07, False)
p.stop()

GPIO.cleanup()


==============================================
##Pull up circuit
import time
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
GPIO.setwarnings(False)

button = 4

GPIO.setup(button, GPIO.IN, GPIO.PUD_UP)  #GPIO.PUD_D0WN

while True:
    button_state = GPIO.input(button)
    if button_state == GPIO.HIGH:
      print ("HIGH")
    else:
      print ("LOW")
    time.sleep(0.5)


##keypad
import RPi.GPIO as GPIO
import time

class keypad():
    # CONSTANTS
    KEYPAD = [
    [1,2,3],
    [4,5,6],
    [7,8,9],
    ["*",0,"#"]
    ]

    ROW         = [25,24,23,18]
    COLUMN      = [22,17,4]

    def __init__(self):
        GPIO.setmode(GPIO.BCM)

        # Set all columns as output low
        for j in range(len(self.COLUMN)):
            GPIO.setup(self.COLUMN[j], GPIO.OUT)

        # Set all rows as input
        for i in range(len(self.ROW)):
            GPIO.setup(self.ROW[i], GPIO.IN, pull_up_down=GPIO.PUD_UP)


    def getKey(self):

        for i in range(len(self.COLUMN)):
            GPIO.output(self.COLUMN[i], GPIO.LOW)
            for j in range(len(self.ROW)):
                tmpRead = GPIO.input(self.ROW[j])
                if tmpRead==0:
                    GPIO.output(self.COLUMN[i], GPIO.HIGH)

                    return self.KEYPAD[j][i]
                    print(self.KEYPAD[j][i])
            GPIO.output(self.COLUMN[i], GPIO.HIGH)

kp = keypad()

try:
    while True:
        digit = None
        while digit == None:
            digit = kp.getKey()
        time.sleep(0.5)

    # Print the result
        print (digit)
except KeyboardInterrupt:
    GPIO.cleanup()

#Light Sensor Code
import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BOARD)

pin_to_circuit = 7

def rc_time (pin_to_circuit):
    count = 0

    GPIO.setup(pin_to_circuit, GPIO.OUT)
    GPIO.output(pin_to_circuit, GPIO.LOW)
    time.sleep(0.1)

    #Change the pin back to input
    GPIO.setup(pin_to_circuit, GPIO.IN)

    #Count until the pin goes high
    while (GPIO.input(pin_to_circuit) == GPIO.LOW):
        count += 1

    return count

#Catch when script is interrupted, cleanup correctly
try:
    # Main loop
    while True:
        print(rc_time(pin_to_circuit))
except KeyboardInterrupt:
    pass
finally:
    GPIO.cleanup()



##load sensor

import RPi.GPIO as GPIO                # import GPIO
from hx711 import HX711                # import the class HX711

GPIO.setmode(GPIO.BCM)                 # set GPIO pin mode to BCM numbering

DOUT = 5
PD_SCK = 6
gain = 128
print("Gain = {}".format(gain))
hx = HX711(DOUT, PD_SCK, gain)

while True:
    GPIO.wait_for_edge(DOUT, GPIO.FALLING)
    try:
        val = hx.read()
        print("value = {0} ".format(val))

    except KeyboardInterrupt:
        GPIO.cleanup()

GPIO.cleanup()
#DC Motor
import RPi.GPIO as GPIO
from time import sleep

GPIO.setmode (GPIO.BOARD)

GPIO.setup(03, GPIO.OUT)
GPIO.setup(05, GPIO.OUT)
GPIO.setup(07, GPIO.OUT)

p = GPIO.PWM(07,100)
p.start(0)


p.ChangeDutyCycle(25)

GPIO.output (07, True)
sleep(5)

GPIO.output (07, False)
GPIO.output (03, False)
GPIO.output (05, True)
p.ChangeDutyCycle(50)

GPIO.output (07, True)
sleep(5)

GPIO.output (07, False)
p.stop()

GPIO.cleanup()
