
void engine_start (int num_motor, bool on_off)
/*
 * Iniciar motores si PWM
 * Start monitors without PWM
 */
{
   digitalWrite(num_motor, on_off);
}

void motor_ass (uint8_t pwm, uint8_t motor, int control)
/*
 * ( pwm , motor, 0 = active ramp up )
 */
{
  switch (control)
  {
    case 0:                           // with ramp up
        
      for (int i=pwm_min; i<pwm; i++)
      {
        analogWrite(motor, i);
        delay (time_delay_rampa);
      }
    default:                          // only pwm
    
      analogWrite(motor, pwm);
  
  }
}
void act_servo()
/*
 * move servo to chair recline 
 */
{
    servo.write(pos_ini_servo);
    for (int i=pos_ini_servo; i<180; i++)
    {
      servo.write(i);
      delay (time_delay_rampa);
    }
    servo.write(pos_ini_servo);
}
void chair_down()
/*
 * Activate drop chair 
 */
{
        engine_start (M9 , 1);
        delay (3000  );
        engine_start (M9 , 0);
}

