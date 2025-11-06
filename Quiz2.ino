#importing methods
import time
import random
from gpiozero import LED, Button

#assigning button and LED outputs on the GPIO
rButton = Button(5)
gButton = Button(6)
bButton = Button(13)

rLED = LED(16)
gLED = LED(25)
bLED = LED(21)

#main code to turn the LEDs off and on
def main():

    if rButton.is_pressed:
        rLED.on()
    else:
        rLED.off()
               
    if gButton.is_pressed:
        gLED.on()
    else:
        gLED.off()
            
    if bButton.is_pressed:
        bLED.on()
    else:
        bLED.off()
            
        
    
def ledsOff():
    rLED.off()
    gLED.off()
    bLED.off()
        
while True:
    main()
