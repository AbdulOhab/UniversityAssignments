import RPi.GPIO as GPIO
GPIO.setmode(GPIO.BCM)
 
#The output pin
GPIO_PIN = 23
GPIO.setup(GPIO_PIN, GPIO.OUT)

pwm = GPIO.PWM(GPIO_PIN, 500)
pwm.start(50)
# The program will wait for the input of a new frequency.

try:
    while(True):
        
        print ("- - - -")
        Frequency = 2
        pwm.ChangeFrequency(Frequency)
         
except KeyboardInterrupt:
    GPIO.cleanup()