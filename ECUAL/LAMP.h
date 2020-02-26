#ifndef LAMP_H
#define LAMP_H

#define IN_MODE 		0
#define OUT_MODE 		1
	
#define LAMP_ON  		HIGH
#define LAMP_OFF 		LOW


#define NUM_OF_LAMPS  	1

#define SALOON_LAMP 	0
#define SALOON_PORT 	GPIO_PORTA
#define SALOON_PIN 		GPIO_PIN0

/* lamp_CH options:
		1. SALOON_LAMP
*/

Error_Status Lamp_Init (u8 lamp_CH);



/* lamp_CH options:
		1. SALOON_LAMP

	lamp_status options:
		1. LAMP_ON 
		2. LAMP_OFF
*/
Error_Status Lamp_update (u8 lamp_CH , u8 lamp_status);

#endif
