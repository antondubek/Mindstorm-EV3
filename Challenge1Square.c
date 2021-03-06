#pragma config(Sensor, S2,     ultrasonic,     sensorEV3_Ultrasonic)
#pragma config(Sensor, S3,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S4,     colour,         sensorEV3_Color)
#pragma config(Motor,  motorA,          mediumMotor,   tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
#pragma config(Motor,  motorD,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//



task main()
{

  int numberOfSquares = 4; //How many times the robot will complete a square

  for(int i = 0; i <= numberOfSquares, i++)
  {
    forward(2, seconds, 50);
    turnRight(270, rotations, 50);
  }

}
