/* LAMP_CH options:
		1. SALOON_LAMP
*/

Error_Status Lamp_Init (u8 LAMP_CH)
{
	u8 Error_Status = E_NOK;
	if(LAMP_CH < Num_Of_LAMPS)
	{
		switch(LAMP_CH)
		{
			case SALOON_LAMP:
			Error_Status = GPIO_Init(SALOON_PORT, SALOON_PIN, OUT_MODE);
			Error_Status = GPIO_WritePin(SALOON_PORT, SALOON_PIN, LOW);
			break;
		}
	}
	return Error_Status;
}

/* lamp_status options:
		1. LAMP_ON 
		2. LAMP_OFF
*/   
Error_Status Lamp_update (u8 lamp_ch , u8 lamp_status)
{
	u8 Error_Status = E_NOK;
	if(LAMP_CH < Num_Of_LAMPS)
	{
		switch(LAMP_CH)
		{
			case SALOON_LAMP:
				Error_Status = GPIO_WritePin(SALOON_PORT, SALOON_PIN,status);
			break;
		}
	}
		return Error_Status;
}