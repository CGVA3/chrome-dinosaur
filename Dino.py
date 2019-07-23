#!/usr/bin/python
# -*- coding: iso-8859-1 -*-
import time
import serial
from pynput.keyboard import Key, Controller
 
ser = serial.Serial('/dev/tty.usbmodem14201')
keyboard = Controller() 
time.sleep(1.8) 
ser.flushInput()

while True:
	ser_bytes = ser.read(1)
	print (ser_bytes)
	if ser_bytes == b'1':
		keyboard.press(Key.space)
		print ('P')
	else:
		keyboard.release(Key.space)
# Cerrando puerto serial
arduinoPort.close()
