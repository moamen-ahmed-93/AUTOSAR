Error_Status DoorSensor_Init(void)
{
	u8 Local_Error = OK;
	GPIO_Init(DOORSENSOR1_PORT,DOORSENSOR1_PIN,DOORSENSOR1_MODE);
	GPIO_Init(DOORSENSOR2_PORT,DOORSENSOR2_PIN,DOORSENSOR2_MODE);
	return Local_Error;
}

Error_Status DoorSensor_ReadStatus(u8 Sensor_Ch,u8* Status)
{
	if(Sensor_Ch<=2)
	{
		u8 Local_Error = OK;
		if(Sensor_Ch==LEFTSENSOR)
		{
			*Status = GPIO_ReadPin(DOORSENSOR1_PORT,DOORSENSOR1_PIN);
		}
		if else(Sensor_Ch==RIGHTSENSOR)
		{
			*Status = GPIO_ReadPin(DOORSENSOR2_PORT,DOORSENSOR2_PIN);
		}
		else
		{
			Local_Error = NOK;
		}
	}
	return Local_Error;
}	