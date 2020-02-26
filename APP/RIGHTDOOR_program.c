#include "../Components/STD_TYPES.h"

#include "RIGHTDOOR_interface.h"

Error_Status RightDoor_Int(void){
	Error_Status err=STD_ERR_OK;
	err=DoorSensor_Init(RIGHT_DOOR_SENSOR_PIN);
	return err;
}
Error_Status RightDoor_GetStatus(u8* RDoorStatus){
	Error_Status err=STD_ERR_OK;
	u8 res=0;
	err=DoorSensor_ReadStatus(RIGHT_DOOR_SENSOR_PIN,&res);
	*RDoorStatus=res;
	return err;
}
