# ControlArduionoServoMotorBySpeech
This repository contains the deliverables for task 2 week 3 for Smart methods company IoT Summer Training.

Project Explanation:
The project contains three main files, A JS file and an HTML webpage, and an arduino code for controlling the robot arm.
while running the text to speech webpage, when pressing the "Start" button, the browser will ask the user for a connection to a serial port in the user's device. please choose the port that the arduino hardwrae is connected to. This is very importent because the commands will be sent through this port.
If no port is chosen, please refresh the page and try again. After that run the provided arduino code in the arduino hardware. 

If done correctly, commands like "left" or "right" that are issued in the speech to text web page will translate into motion in the arduino servo motor. saying "right" or "يمين" will make the led light turn on, and will rotate the arm 180 degrees, while saying "left" or "يسار" will turn the light off and rotate the arm back to 0 degrees.

I have also provided a hex file for the arduino code, this can be used if the user want to use or test the code without arduino hardware, by using a simulator called "Proteus" and desigining the servo motor circuit in there. you can use this file to simulate the same outcome in software form.

How it works:
the JS code contains segemtns that uses the web serial API. it opens a port for writing or sending, and whenever new words are detected by the speech to text API, these words are sent to the serial port and is received by the other side in the arduino to process it. 
