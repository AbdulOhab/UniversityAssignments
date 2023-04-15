import RPi.GPIO as GPIO
import time
GPIO.setmode(GPIO.BCM)

 
#The output pin
GPIO_PIN = 21
GPIO.setup(GPIO_PIN, GPIO.OUT)

pwm = GPIO.PWM(GPIO_PIN, 500)
pwm.start(50)
# The program will wait for the input of a new frequency.

try:
        
    while(True):
        print("Sa Re Ga Ma Pa") 
        print("Current frequency: %d" % 500) 
        Frequency = input("Please input a new frequency (50-5000):")
        freq=float(Frequency)
        time.sleep(5)
        pwm.ChangeFrequency(freq)
         
except KeyboardInterrupt:
    GPIO.cleanup()