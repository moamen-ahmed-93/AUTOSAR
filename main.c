#include "Components/STD_TYPES.h"
#include "MCAL/RCC_interface.h"
#include "MCAL/GPIO_interface.h"
#include "ECUAL/DoorSensing_interface.h"
#include "ECUAL/LAMP.h"
#include "APP/LEFTDOOR_interface.h"
#include "APP/RIGHTDOOR_interface.h"
#include "APP/LIGHT_interface.h"

int main(void) {
    u8 Loc_Error = 0 ;
    u8 RightDoorStatus ;
    u8 LeftDoorStatus ;

    if(!Loc_Error)
    {
        Loc_Error=LeftDoor_Int();
    }
    if(!Loc_Error)
    {
        Loc_Error=RightDoor_Int();
    }
    if(!Loc_Error)
    {
        Loc_Error=Lighting_Int();
    }
    if(!Loc_Error)
    {
        Loc_Error=Lighting_Control(LIGHT_OFF_STATE);
    }

    while(1)
    {
        if(!Loc_Error)
        {
            Loc_Error=LeftDoor_GetStatus(&LeftDoorStatus);
        }
        if(!Loc_Error)
        {
            Loc_Error=RightDoor_GetStatus(&RightDoorStatus);
        }
        if(!( LeftDoorStatus&&RightDoorStatus ))
        {
            if(!Loc_Error)
                Loc_Error=Lighting_Control(LIGHT_ON_STATE);
        }
        else
        {
            if(!Loc_Error)
                Loc_Error=Lighting_Control(LIGHT_OFF_STATE);
        }



    }
}
