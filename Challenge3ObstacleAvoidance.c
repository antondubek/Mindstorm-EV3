#pragma config(Sensor, S1,     ultrasonic,     sensorEV3_Ultrasonic)
#pragma config(Motor,  motorB,          leftMotor,     tmotorEV3_Large, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorC,          rightMotor,    tmotorEV3_Large, PIDControl, driveRight, encoder)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true)
	{
		if(getUSDistance(S1) < 15)
		{
			stopAllMotors();
			turnLeft(100, degrees, 50);
			int leftReading = getUSDistance(S1);

			turnRight(200, degrees, 50);
			int rightReading = getUSDistance(S1);

			if (leftReading > rightReading)
			{
				turnLeft(200, degrees, 50);
			}
		}

		else
		{
			setMultipleMotors(40, leftMotor, rightMotor);
    }



	}

}