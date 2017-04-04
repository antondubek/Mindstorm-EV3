#pragma config(Sensor, S2,     ultrasonic,     sensorEV3_Ultrasonic)
#pragma config(Sensor, S3,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S4,     colour,         sensorEV3_Color)
#pragma config(Motor,  motorA,          mediumMotor,   tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
#pragma config(Motor,  motorD,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//




task main()
{
  int distance = 0;

  while(getButtonPress(buttonEnter) != 1);
  {
    displayBigTextLine(3, "Input Distance to Travel");
    displayBigTextLine(6, "Distance (cm) %d", distance);

    if(getButtonPress(buttonUp) == 1)
    {
      distance++;
      sleep(250);
    }

    if(getButtonPress(buttonDown) == 1)
    {
      distance--;
      sleep(250);
    }

    sleep(250)
  }

		int wheelDiameter = 7;

		float circumference = 3.14 * wheelDiameter;

		float numberOfRotations = Distance / circumference;

		forward(numberOfRotations, rotations, 30);

		sleep(3000);

		backward(numberOfRotations, rotations, 30);

}