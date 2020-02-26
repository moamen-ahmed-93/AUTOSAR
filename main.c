#include "Components/STD_TYPES.h"
#include "MCAL/RCC_interface.h"
#include "MCAL/GPIO_interface.h"
#include "ECUAL/DoorSensing_interface.h"
#include "ECUAL/LAMP.h"
#include "APP/LEFTDOOR_interface.h"
#include "APP/RIGHTDOOR_interface.h"
#include "APP/LIGHT_interface.h"

int main(void) {
    Error_Status e=STD_ERR_OK;
    u8 door=0;
    RCC_EnablePort(RCC_PORTA);
    Lighting_Int();
    LeftDoor_Int();
    while(1){
        e=LeftDoor_GetStatus(&door);
       if(door==1)
           Lighting_Control(1);
       else
           Lighting_Control(0);

    }
}
