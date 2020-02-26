#include "../Components/STD_TYPES.h"
#include "../MCAL/GPIO_interface.h"
#include "DoorSensing_interface.h"

Error_Status DoorSensor_Init(u8 Door)
{
    Error_Status Local_Error = STD_ERR_OK;
    switch (Door)
    {
    case LEFTSENSOR:
        Local_Error = GPIO_Init(DOORSENSOR1_PORT, DOORSENSOR1_PIN,
        DOORSENSOR1_MODE);

        break;
    case RIGHTSENSOR:
        Local_Error = GPIO_Init(DOORSENSOR2_PORT, DOORSENSOR2_PIN,
        DOORSENSOR2_MODE);

        break;
    default:
        Local_Error = STD_ERR_NOT_OK;
        break;
    }

    return Local_Error;
}

Error_Status DoorSensor_ReadStatus(u8 Sensor_Ch, u8* Status)
{
    Error_Status Local_Error = STD_ERR_OK;
    u8 Value;
    if (Sensor_Ch <= 2)
    {
        if (Sensor_Ch == LEFTSENSOR)
        {
            Local_Error = GPIO_ReadPin(DOORSENSOR1_PORT, DOORSENSOR1_PIN,
                                       &Value);

        }
        else if (Sensor_Ch == RIGHTSENSOR)
        {
            Local_Error = GPIO_ReadPin(DOORSENSOR2_PORT, DOORSENSOR2_PIN,
                                       &Value);
        }
        else
        {
            Local_Error = STD_ERR_NOT_OK;
        }
    }
    if (Local_Error == STD_ERR_OK)
        *Status = Value;
    return Local_Error;
}
