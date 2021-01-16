#include "mcc_generated_files/mcc.h"

void main(void)
{
SYSTEM_Initialize(); //Inizializzazione Del Microcontrollore while (1)
EPWM1_Initialize(); //inizializzazione del moduo epwm1
{
    RB5_SetLow();
    RB6_SetLow();

while(IO_RA2_GetValue()==1){
    PSTR1CON = 0x02; //PWM Solo Su Bit 5 PORTB
    EPWM1_LoadDutyValue(0); //Duty 0%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(99); //Duty 20%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(199); //Duty 40%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(299); //Duty 60%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(399); //Duty 80%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(499); //Duty 100%
    __delay_ms(500); //Aspetto 500ms
    }
while(IO_RA3_GetValue()==1){
    PSTR1CON = 0x04; //PWM Solo Su Bit 6 PORTB
    EPWM1_LoadDutyValue(499); //Duty 100%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(399); //Duty 80%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(299); //Duty 60%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(199); //Duty 40%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(99); //Duty 20%
    __delay_ms(500); //Aspetto 500ms
    EPWM1_LoadDutyValue(0); //Duty 0%
    __delay_ms(500); //Aspetto 500ms
}
}
}