

#define LIGHT_ON_STATE 	/*todo macro from ECUAL to define if the lamp is active high or active low */
#define LIGHT_OFF_STATE /*todo macro from ECUAL to define if the lamp is active high or active low*/

#define LIGHT_PIN

Error_Status Lighting_Int(void);
Error_Status Lighting_Control(u8 Copy_u8LampState);
