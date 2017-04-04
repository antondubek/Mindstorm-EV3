#pragma config(Sensor, S2,     ultrasonic,     sensorEV3_Ultrasonic)
#pragma config(Sensor, S3,     gyro,           sensorEV3_Gyro)
#pragma config(Sensor, S4,     colour,         sensorEV3_Color)
#pragma config(Motor,  motorA,          mediumMotor,   tmotorEV3_Medium, PIDControl, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
#pragma config(Motor,  motorD,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//



task main()
{

  //Motors will move forward at speed 10 as long as colour is outside range of green
  while(getColorHue(colour) > 160)
  {
    while(getColorHue(colour) < 80)
    {
      setMultipleMotors(10, leftMotor, rightMotor);
    }
  }

  // Once in range of green the motors will stop.
  setMultipleMotors(0, leftMotor, rightMotor);


}
