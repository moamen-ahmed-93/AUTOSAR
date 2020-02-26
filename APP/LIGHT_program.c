#include "../Components/STD_TYPES.h"
#include "../MCAL/GPIO_interface.h"
#include "../ECUAL/LAMP.h"
#include "LIGHT_interface.h"


Error_Status Lighting_Int(void){
	Error_Status err=STD_ERR_OK;
	err=Lamp_Init(LIGHT_PIN);
	return err;
}
Error_Status Lighting_Control(u8 Copy_u8LampState){
	Error_Status err=STD_ERR_OK;
	if(Copy_u8LampState== LIGHT_ON_STATE || Copy_u8LampState== LIGHT_OFF_STATE)
		err=Lamp_update(LIGHT_PIN,Copy_u8LampState);
	else
		err=STD_ERR_NOT_OK;
	return err;
}
