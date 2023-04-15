import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)
 
#The output pin
GPIO_PIN = 21
GPIO.setup(GPIO_PIN, GPIO.OUT)

pwm = GPIO.PWM(GPIO_PIN, 500)
pwm.start(25)
# The program will wait for the input of a new frequency.

try:
    while(True):
        
        print ("- - - -")
        Frequency = 240
        pwm.ChangeFrequency(Frequency)
        time.sleep(1)
        print ("- - - -")
        Frequency = 270
        pwm.ChangeFrequency(Frequency)
        time.sleep(1)
        print ("- - - -")
        Frequency = 300
        pwm.ChangeFrequency(Frequency)
        time.sleep(1)
        print ("- - - -")
        Frequency = 337.5
        pwm.ChangeFrequency(Frequency)
        time.sleep(1)
        print ("- - - -")
        Frequency = 360
        pwm.ChangeFrequency(Frequency)
        time.sleep(1)
        print ("- - - -")
        Frequency = 400
        pwm.ChangeFrequency(Frequency)
        time.sleep(1)
        print ("- - - -")
        Frequency = 450
        pwm.ChangeFrequency(Frequency)
        time.sleep(1)
        print ("- - - -")
        Frequency = 4000
        pwm.ChangeFrequency(Frequency)
        time.sleep(1)
         
except KeyboardInterrupt:
    GPIO.cleanup()
