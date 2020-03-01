#ifndef LAMP_H
#define LAMP_H

#define IN_MODE 		0
#define OUT_MODE 		1

/*States Of The Lamp*/
#define LAMP_ON  		HIGH
#define LAMP_OFF 		LOW

/*Number Of Lamps*/
#define NUM_OF_LAMPS  	1

/*Lamp Maping*/
#define SALOON_LAMP 	0
#define SALOON_PORT 	GPIO_PORTA
#define SALOON_PIN 		GPIO_PIN4

/************************************************************************
 * Function name: Lamp_Init
 *
 * parameters:  Input:
 *                 lamp_CH
 *                     type: u8
                        Description: Choose Lamp channel
 *              Output: NA
 *              In/out: NA
 * return: E_OK, E_NOK
 * Description: a function to Initialize Lamp 
 ***************************************************************************/
Error_Status Lamp_Init (u8 lamp_CH);



/************************************************************************
 * Function name: Lamp_update
 *
 * parameters:  Input:
 *                 lamp_CH
 *                     type: u8
                        Description: Choose Lamp Channel
 *                 lamp_status
 *                     type: u8
 *                     Description: Lamp Status (LAMP_ON,LAMP_OFF)
 *              Output: NA
 *              In/out: NA
 * return: E_OK, E_NOK
 * Description: a function to update the lamp Status
 ***************************************************************************/
Error_Status Lamp_update (u8 lamp_CH , u8 lamp_status);

#endif
