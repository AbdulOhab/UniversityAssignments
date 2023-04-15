
import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
 
#The output pin
GPIO_PIN = 21
GPIO.setup(GPIO_PIN, GPIO.OUT)

pwm = GPIO.PWM(GPIO_PIN, 500)
pwm.start(100)
freq={240,270,300,337.5,360,400,450}
# The program will wait for the input of a new frequency.

try:
    while(True):
     
        Frequency = input("Please input a new frequency (50-5000):")
        pwm.ChangeFrequency(Frequency)
         
except KeyboardInterrupt:
    GPIO.cleanup()