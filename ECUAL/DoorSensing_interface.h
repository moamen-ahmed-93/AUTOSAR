Error_Status DoorSensor_Init(void);
Error_Status DoorSensor_ReadStatus(u8 sensor_Ch, u8* Status);

#define DOORSENSOR1_PORT   GPIO_PORTA
#define DOORSENSOR1_PIN     GPIO_PIN6
#define DOORSENSOR1_MODE    MODE_INPUT

#define DOORSENSOR2_PORT   GPIO_PORTA
#define DOORSENSOR2_PIN     GPIO_PIN6
#define DOORSENSOR2_MODE    MODE_INPUT

#define LEFTSENSOR          1
#define RIGHTSENSOR         2
