
 /*************************************************************************
 **                                                                      **
 **        Intensitat lluminosa d'un led controlada per potenciòmetre    **
 **                                                                      **
 *************************************************************************/

 //******  Includes  ******************************************************


 //******  Variables  *****************************************************
 const int pinLED1 = 0;
 const int pinLED2 = 0;
 const int pinLED3 = 0;
 const int pinLED4 = 0;
 const int pinLED5 = 0;
 const int pinLED6 = 0;
 const int pinLED7 = 0;
 const int pinLED8 = 0;
 int LED1 = 0;
 int LED2 = 0;
 int LED3 = 0;
 int LED4 = 0;
 int LED5 = 0;
 int LED6 = 0;
 int LED7 = 0;
 int LED8 = 0;
 int POTENCIOMETRE = 0;
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
 
 void loop () {
   valorPotenciometre = analogRead(A0);
   LED1 = map(valorPotenciometre, 2, 1023, 0, 255);
   LED2 = map(valorPotenciometre, 2, 1023, 0, 255);
   LED3 = map(valorPotenciometre, 2, 1023, 0, 255);
   LED4 = map(valorPotenciometre, 2, 1023, 0, 255);
   LED5 = map(valorPotenciometre, 2, 1023, 0, 255);
   LED6 = map(valorPotenciometre, 2, 1023, 0, 255);
   LED7 = map(valorPotenciometre, 2, 1023, 0, 255);
   LED8 = map(valorPotenciometre, 2, 1023, 0, 255);
   analogWrite(5,LED1);
   analogWrite(6,LED2);
   analogWrite(7,LED3);
   analogWrite(8,LED4);
   analogWrite(9,LED5);
   analogWrite(10,LED6);
   analogWrite(11,LED7);
   analogWrite(12,LED8);
   delay(100);
   
 }
   
   
   
   
   
 
