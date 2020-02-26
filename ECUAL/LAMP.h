#define E_NOK 	0
#define E_OK  	1

#define IN_MODE 0
#define OUT_MODE 1

#define LOW 0
#define HIGH 1


#define NUM_OF_LAMPS  	1

#define SALOON_LAMP 0
#define SALOON_PORT GPIO_PORTA
#define SALOON_PIN 	GPIO_PIN0


Error_Status Lamp_Init (u8 ID);
