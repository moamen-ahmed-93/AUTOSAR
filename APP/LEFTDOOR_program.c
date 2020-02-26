#include "../Components/STD_TYPES.h"
#include "../ECUAL/DoorSensing_interface.h"
#include "LEFTDOOR_interface.h"


Error_Status LeftDoor_Int(void){
    Error_Status err=STD_ERR_OK;
    err=DoorSensor_Init(LEFT_DOOR_SENSOR_PIN);
    return err;
}
Error_Status LeftDoor_GetStatus(u8* LDoorStatus){
    Error_Status err=STD_ERR_OK;
    u8 res=0;
    err=DoorSensor_ReadStatus(LEFT_DOOR_SENSOR_PIN,&res);
    *LDoorStatus=res;
    return err;
}
