#ifndef GPIO_INTERFACE_H
#define GPIO_INTERFACE_H 


#define GPIOA_DATA       	(*((u32 volatile*)(0x400043FC)))
#define GPIOA_DIRECTION  	(*((u32 volatile*)(0x40004400)))
#define GPIOA_DEN        	(*((u32 volatile*)(0x4000451C)))
#define GPIOA_CR          	(*((u32 volatile*)(0x40004524)))
#define GPIOA_LOCK         	(*((u32 volatile*)(0x40004520)))
#define GPIOA_PUR        	(*((u32 volatile*)(0x40004510)))


#define GPIO_PORTA 0x1
#define GPIO_PORTB 0x2
#define GPIO_PORTC 0x4
#define GPIO_PORTD 0x8
#define GPIO_PORTE 0x10
#define GPIO_PORTF 0x20


#define GPIO_PIN0 0x1
#define GPIO_PIN1 0x2
#define GPIO_PIN2 0x4
#define GPIO_PIN3 0x8
#define GPIO_PIN4 0x10
#define GPIO_PIN5 0x20
#define GPIO_PIN6 0x40
#define GPIO_PIN7 0x80



Error_Status GPIO_Init(u8 Port,u8 Pin,u8 Direction);
Error_Status GPIO_WritePin(u8 Port,u8 Pin,u8 Value);
Error_Status GPIO_ReadPin(u8 Port,u8 Pin,u8 *Value);


#endif