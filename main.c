#include "Components/STD_TYPES.h"
#include "MCAL/RCC_interface.h"
#include "MCAL/GPIO_interface.h"
#include "ECUAL/DoorSensing_interface.h"
#include "ECUAL/LAMP.h"
#include "APP/LEFTDOOR_interface.h"
#include "APP/RIGHTDOOR_interface.h"
#include "APP/LIGHT_interface.h"

int main(void) {
    RCC_EnablePort(RCC_PORTA);
    GPIO_Init(GPIO_PORTA, GPIO_PIN4, 1);
    GPIO_WritePin(GPIO_PORTA, GPIO_PIN4, 1);
    while(1);
}
