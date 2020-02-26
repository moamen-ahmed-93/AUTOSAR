

#define LIGHT_ON_STATE 	HIGH/*todo macro from ECUAL to define if the lamp is active high or active low */
#define LIGHT_OFF_STATE LOW/*todo macro from ECUAL to define if the lamp is active high or active low*/

#define LIGHT_PIN SALOON_LAMP

Error_Status Lighting_Int(void);
Error_Status Lighting_Control(u8 Copy_u8LampState);
