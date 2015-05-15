 /*************************************************************************
 **                                                                      **
 **                            coche fantastic                           **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 const int pinLED1 = 5;
 const int pinLED2 = 6;
 const int pinLED3 = 7;
 const int pinLED4 = 8;
 const int pinLED5 = 9;
 const int pinLED6 = 10;
 const int pinLED7 = 11;
 const int pinLED8 = 12;
 int valorPotenciometre = 0;
 
 //******  Setup  *****************************************************
 void setup () {
   
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(7, OUTPUT);
   pinMode(8, OUTPUT);
   pinMode(9, OUTPUT);
   pinMode(10, OUTPUT);
   pinMode(11, OUTPUT);
   pinMode(12, OUTPUT);
   pinMode(A0,INPUT);
   Serial.begin(9600);
   
 }
 
 //******  Loop  *****************************************************
 
 void loop () 
 {
   valorPotenciometre = analogRead(A0);
   valorPotenciometre = map(valorPotenciometre, 0, 1023, 0, 10000);

     digitalWrite(pinLED1, LOW);
     digitalWrite(pinLED2, LOW);
     digitalWrite(pinLED3, LOW);
     digitalWrite(pinLED4, LOW);
     digitalWrite(pinLED5, LOW);
     digitalWrite(pinLED6, LOW);
     digitalWrite(pinLED7, LOW);
     digitalWrite(pinLED8, LOW);
     delay(valorPotenciometre);
     digitalWrite(pinLED1, LOW);
     digitalWrite(pinLED2, LOW);
     digitalWrite(pinLED3, LOW);
     digitalWrite(pinLED4, HIGH);
     digitalWrite(pinLED5, HIGH);
     digitalWrite(pinLED6, LOW);
     digitalWrite(pinLED7, LOW);
     digitalWrite(pinLED8, LOW);
     delay(valorPotenciometre);
     digitalWrite(pinLED1, LOW);
     digitalWrite(pinLED2, LOW);
     digitalWrite(pinLED3, HIGH);
     digitalWrite(pinLED4, LOW);
     digitalWrite(pinLED5, LOW);
     digitalWrite(pinLED6, HIGH);
     digitalWrite(pinLED7, LOW);
     digitalWrite(pinLED8, LOW);
     delay(valorPotenciometre);
     digitalWrite(pinLED1, LOW);
     digitalWrite(pinLED2, HIGH);
     digitalWrite(pinLED3, LOW);
     digitalWrite(pinLED4, LOW);
     digitalWrite(pinLED5, LOW);
     digitalWrite(pinLED6, LOW);
     digitalWrite(pinLED7, HIGH);
     digitalWrite(pinLED8, LOW);
     delay(valorPotenciometre);
     digitalWrite(pinLED1, HIGH);
     digitalWrite(pinLED2, LOW);
     digitalWrite(pinLED3, LOW);
     digitalWrite(pinLED4, LOW);
     digitalWrite(pinLED5, LOW);
     digitalWrite(pinLED6, LOW);
     digitalWrite(pinLED7, LOW);
     digitalWrite(pinLED8, HIGH);
     delay(valorPotenciometre);
     
     
     }
     
