/*  
 *   
 *   library dedicated to define the pins used
 *   
*/

//         Pins

#define M1  2  //motor top   left
#define M2  8  //motor top   right
#define M3  4  //motor midst left
#define M4  11 //motor midst right
#define M5  7  //motor below left
#define M6  13 //motor below right
#define M7  9  //motor under ass
#define M8  14 //acction, relay heater
#define M9  15 //acction, chair down
#define S1  5  //aaction, chair recline

//        constants

#define time_delay_rampa 12   // time of rise
#define pos_ini_servo    40   // initial position of servo
#define pwm_min          100  // minimum pwm of motors control

//     pin configuration

void pinmode(bool boleano)
{
   if (boleano == 1)
   {
      pinMode(M1, OUTPUT);
      pinMode(M2, OUTPUT);
      pinMode(M3, OUTPUT);
      pinMode(M4, OUTPUT);  
      pinMode(M5, OUTPUT);  
      pinMode(M6, OUTPUT);
      pinMode(M7, OUTPUT);
      pinMode(M8, OUTPUT);  
      pinMode(M9, OUTPUT); 
      servo.attach(S1);
   }
}
