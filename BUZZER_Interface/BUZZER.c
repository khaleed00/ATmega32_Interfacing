#include "BUZZER.h"

void Buzzer_init(){
	DioDirectionSet(Buzzer_Port,Buzzer_Pin,DIO_OUTPUT);
}
void Buzzer_SetState(Dio_PinStateEnum_t state){
	switch(state){
		case DIO_LOW:
			DioChannelWrite(Buzzer_Port,Buzzer_Pin,DIO_LOW);
			break;
		case DIO_HIGH:
			DioChannelWrite(Buzzer_Port,Buzzer_Pin,DIO_HIGH);
			break;
	}
}
