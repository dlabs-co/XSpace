int dato=0;
void begin_com()
{
  if (Serial.available())
  {
    dato=Serial.read();
    delay(100);
    switch (dato)
    {
      case 'a':
      case 'A': // 
      {
        sec_asc (1250);
        Serial.println("Ramp up from the ass");
        break; 
      }
      case 'b':
      case 'B': // 
      {
        sec_takeoff (125);
        Serial.println("Takeoff!");
        break; 
      }
      case 'c':
      case 'C': // 
      {
        sec_off (125);
        Serial.println("Apagando motores!");
        break; 
      }
      case 'd':
      case 'D': // 
      {
        sec_left (500);
        Serial.println("motors left start");
        break; 
      }
      case 'e':
      case 'E': // 
      {
        sec_right (500);
        Serial.println("motors rigth start");
        break; 
      }
      case 'f':
      case 'F': // 
      {
        act_servo ();
        Serial.println("servo on");
        break; 
      }
      case 'g':
      case 'G': // 
      {
        chair_down();
        digitalWrite(14,1);
        act_servo();
        for (int i=10; i>=0; i--)
        {
          sec_right (500);
          sec_left (500);
          sec_soft_start(300);
        }
        
        Serial.println("Chair take down");
        digitalWrite(14,0);
        break; 
      }  
      case 'h':
      case 'H':
      {
        heater(1);
        digitalWrite(14,1); 
        Serial.println("Heater ON");
        break; 
      } 
      case 'i':
      case 'I':
      {
        heater(0);
        digitalWrite(14,0);
        Serial.println("Heater OFF");
        break; 
      }
      
      case 'j':
      case 'J':
      {
        for (int i=10; i>=0; i--)
        {
          sec_soft_start(300);
        }
        
        Serial.println("Starting soft takeoff");
        break; 
      }
      
      case 'k':
      case 'K': // 
      {
        sec_up (500);
        Serial.println("Start top motors");
        break; 
      }
      
      case 'l':
      case 'L': // 
      {
        sec_down (500);
        Serial.println("Start below motor");
        break; 
      }

      case 'm':
      case 'M': // 
      {
        sec_ass (500);
        Serial.println("Start ass motor");
        break; 
      }
    }
  }
}
