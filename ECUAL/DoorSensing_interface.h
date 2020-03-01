
/************************************************************************
 * File name: DoorSensing.h
 *
 *
 * Description: This file contains the prototypes of the DoorSensing driver
 * and the macros used by the user
 *
 * owner: Group Autosar
 * date: 27/2/2020
 * version 1.1
 *
 ***************************************************************************/

/************************************************************************
 * Function name: DoorSensor_Init
 *
 * parameters:  Input:
 *                 Door
 *                     type: u8
                        Description: Left OR Right Sensor
 *              Output: NA
 *              In/out: NA
 * return: E_OK, E_NOK
 * Description: a function to Initialize Sensor With GPIO Driver
 ***************************************************************************/
Error_Status DoorSensor_Init(u8 Door);

/************************************************************************
 * Function name: GPIO_Init
 *
 * parameters:  Input:
 *                 sensor_Ch
 *                     type: u8
                        Description: Sensor Channels (Channel 1 , Channel 2)
 *                 Status
 *                     type: u8 *
 *                     Description: Status Of the Sensor
 *
 *              Output: NA
 *              In/out:  Status
 *                     type: Pointer To u8
 *                     Description: Status to be read from the Sensor
 * return: E_OK, E_NOK
 * Description: a function to read the status of the sensor according to Channel 
 ***************************************************************************/
Error_Status DoorSensor_ReadStatus(u8 sensor_Ch, u8* Status);


/* DoorSensor_1 Mapping */
#define DOORSENSOR1_PORT   GPIO_PORTA
#define DOORSENSOR1_PIN     GPIO_PIN2
#define DOORSENSOR1_MODE    MODE_INPUT
/* DoorSensor_2 Mapping */
#define DOORSENSOR2_PORT   GPIO_PORTA
#define DOORSENSOR2_PIN     GPIO_PIN3
#define DOORSENSOR2_MODE    MODE_INPUT
/* Sensors Mapping */
#define LEFTSENSOR          1
#define RIGHTSENSOR         2
