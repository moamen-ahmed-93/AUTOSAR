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

