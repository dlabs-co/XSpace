/*
 * 
 * Libreria intended movements
 * 
 */

void sec_asc (uint16_t wait)
/*
 * Ascenso, encendido secuenciado de motores desde abajo hacia arriba
 * Ascent. engine ignition sequence from the bottom to up
*/
{

  motor_ass      (200,M7,0);
  engine_start   (M5  ,  1);
  engine_start   (M6  ,  1);
  delay          (  wait  );
  engine_start   (M3  ,  1);
  engine_start   (M4  ,  1);
  motor_ass      ( 0,M7, 1);
  delay          (  wait  );
  engine_start   (M1  ,  1);
  engine_start   (M2  ,  1);
  engine_start   (M5  ,  0);  
  engine_start   (M6  ,  0);
  delay          (  wait  );
  engine_start   (M3  ,  0);
  engine_start   (M4  ,  0);
  delay          (  wait  );
  engine_start   (M1  ,  0);
  engine_start   (M2  ,  0);
}
void sec_soft_start(uint16_t wait)
/*
 * Encendido suave de motores 1, 2, 3 y 4
 * Soft start engine 1, 2, 3 & 4
 */
{
  
  engine_start   (M1  ,  1);
  engine_start   (M2  ,  1);
  delay          (  wait  );
  engine_start   (M3  ,  1);
  engine_start   (M4  ,  1);
  engine_start   (M1  ,  0);
  engine_start   (M2  ,  0);
  delay          (  wait  );
  engine_start   (M3  ,  0);
  engine_start   (M4  ,  0);
  delay          (  wait  ); 


}

void sec_takeoff (uint16_t wait)
/*
 * Secuencia de despegue
 * Launch sequence
 */
{

  motor_ass      (175,M7,0);
  engine_start   (M5  ,  1);
  engine_start   (M6  ,  1);
  delay          (  wait  );
  engine_start   (M3  ,  1);
  engine_start   (M4  ,  1);
  delay          (  wait  );
  engine_start   (M1  ,  1);
  engine_start   (M2  ,  1);
  delay          (  5000  );
}

void sec_right (uint16_t wait)
/*
 * Encendido de motores rerechos
 * Only start right motors
 */
{
  engine_start   (M2  ,  1);
  engine_start   (M4  ,  1);
  engine_start   (M6  ,  1);
  delay          (  wait  );
  engine_start   (M2  ,  0);
  engine_start   (M4  ,  0);
  engine_start   (M6  ,  0);
}

void sec_left (uint16_t wait)
/*
 * Encendido de motores izquierdos
 * Only start left motors
 */
{
  engine_start   (M1  ,  1);
  engine_start   (M3  ,  1);
  engine_start   (M5  ,  1);
  delay          (  wait  );
  engine_start   (M1  ,  0);
  engine_start   (M3  ,  0);
  engine_start   (M5  ,  0);
}


void sec_up (uint16_t wait)
/*
 * Encendido de motores superiores
 * Only start top motors
 */
{
  engine_start   (M1  ,  1);
  engine_start   (M2  ,  1);
  delay          (  wait  );
  engine_start   (M1  ,  0);
  engine_start   (M2  ,  0);
}

void sec_down (uint16_t wait)
/*
 * Encendido de motores inferiores
 * Only start below motors
 */
{
  engine_start   (M5  ,  1);
  engine_start   (M6  ,  1);
  delay          (  wait  );
  engine_start   (M5  ,  0);
  engine_start   (M6  ,  0);
}
void sec_ass (uint16_t wait)
/*
 * Encendido de motor del culo
 * Only start motor of ass
 */
{
  motor_ass(200,M7,0);
  delay          (  wait  );
  motor_ass(0 ,M7, 0);
}
void sec_off (uint16_t wait)
/*
 * Apagado de motores
 * Engines off
 */
{
  engine_start   (M1  ,  0);
  engine_start   (M2  ,  0);
  engine_start   (M3  ,  0);
  engine_start   (M4  ,  0);
  engine_start   (M5  ,  0);
  engine_start   (M6  ,  0);
  motor_ass      (0 ,M7, 0);
  engine_start   (M8  ,  0);
  engine_start   (M9  ,  0);
}

void heater(bool on_off)
/*
 * Encender y apagar calefactor
 * On/Off heater
 */
{
  if (on_off==1)
  {
    engine_start    (M9,1);
  }
  else
  {
    engine_start    (M9,0);
  }
}

