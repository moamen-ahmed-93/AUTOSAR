
#define LEFT_DOOR_SENSOR_PIN 0
#define LEFT_DOOR_SENSOR_PIN 1

#define LIGHT_PIN 2

Error_Status Lighting_Int(void);
Error_Status Lighting_Control();
Error_Status LeftDoor_Int(void);
Error_Status LeftDoor_GetStatus(u8* LDoorStatus);
Error_Status RightDoor_Int(void);
Error_Status RightDoor_GetStatus(u8* RDoorStatus);

