# *MPU6050 Videogame Controller*

This project is part of the larger custom video game controller project, which is setup to allow control mappings to a pc. The MPU6050 controller has the capability of using the MPUs accelerometer to estimate the velocity of the controller for simulating buttons when force is applied along one of the axes i.e. if you move the mpu up, down, left, right, forward, or backward each simulates a button press. The gyroscope is used to simulate two variable control mappings, using the pitch and roll of the mpu to allow for analog like control; the yaw is not used as it can not be normalized against gravity.

## *Install:*

To install the requirements for this project, copy the StandardC++ Arduino library - created by maniacbug on [Github](https://github.com/maniacbug/StandardCplusplus) - to the Arduino libraries folder.

## *Running:*

To run this project, the hardware needs to be wired.
- Connect the VCC on the MPU6050 to 3.3V or 5V on Arduino.
- Connect the GND on the MPU6050 to the GND on the Arduino.
- Connect the SCL pin to analog pin 5.
- Connect the SDA pin to analog pin 4.
- Connect the INT pin to digital pin 2.
- Write the project to the Arduino.
- Connect using a baudrate of 38400.

###### *Referenced Projects:*

This project was built from [i2cdevlib](https://github.com/jrowberg/i2cdevlib) and used [StandardC++](https://github.com/maniacbug/StandardCplusplus).
