#include "../Components/STD_TYPES.h"
#include "../MCAL/GPIO_interface.h"
#include "LAMP.h"

/* lamp_CH options:
		1. SALOON_LAMP
*/

Error_Status Lamp_Init (u8 lamp_CH)
{
	u8 Error_Status = STD_ERR_NOT_OK;
	if(lamp_CH < NUM_OF_LAMPS)
	{
		switch(lamp_CH)
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
Error_Status Lamp_update (u8 lamp_CH , u8 lamp_status)
{
	u8 Error_Status = STD_ERR_NOT_OK;
	if(lamp_CH < NUM_OF_LAMPS)
	{
		switch(lamp_CH)
		{
			case SALOON_LAMP:
				Error_Status = GPIO_WritePin(SALOON_PORT, SALOON_PIN, lamp_status);
			break;
		}
	}
		return Error_Status;
}
