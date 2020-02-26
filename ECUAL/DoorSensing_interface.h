Error_Status DoorSensor_Init(void);
Error_Status DoorSensor_ReadStatus(u8 sensor_Ch,u8* Status);

#define DOORSENSOR1_PORT   'A'    
#define DOORSENSOR1_PIN     1
#define DOORSENSOR1_MODE    PULL_UP

#define DOORSENSOR2_PORT   'B'
#define DOORSENSOR2_PIN     1
#define DOORSENSOR2_MODE    PULL_UP

#define LEFTSENSOR          1
#define RIGHTSENSOR         2