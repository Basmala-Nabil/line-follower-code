 //Pins of Motor a
   int ena= A1;
   int in1a= 12;
   int in2a= 2;
 //Pins of Motor b
   int enb= A2;
   int in3b= 11;
   int in4b= 13;
 // Pins of IR sensors a 
   int otra= 5;
   int otca= A5;
   int otla= 3;
 // Pins of IR sensors b
   int otrb= A4;
   int otcb= 6;
   int otlb= A3;
 // Pins of Ultrasonic
   int trig= 9;
   int echo= 10;
  
   double Distance;
   double Time; 
   
void setup() {
 // Motor a
   pinMode(ena,OUTPUT);
   pinMode(in1a,OUTPUT);
   pinMode(in2a,OUTPUT);
 // Motor b
   pinMode(enb,OUTPUT);
   pinMode(in3b,OUTPUT);
   pinMode(in4b,OUTPUT);
 // IR sensors a
   pinMode(otra,INPUT);
   pinMode(otca,INPUT);
   pinMode(otla,INPUT);
 // IR sensors b
   pinMode(otrb,INPUT);
   pinMode(otcb,INPUT);
   pinMode(otlb,INPUT);
   
 // Ultrasonic 
   pinMode(trig,OUTPUT);
   pinMode(echo,INPUT); 
         
}

void loop() {

   digitalWrite (trig,LOW);
   delayMicroseconds(5);
   digitalWrite(trig,HIGH);
   delayMicroseconds(10);
   digitalWrite(trig,LOW);
   Time=pulseIn(echo,HIGH);
   Distance=Time / 2.0 * 343.0 * 0.0001;
   if (Distance < 20 )
   {
    digitalWrite(in1a,LOW);
    digitalWrite(in2a,LOW);
    digitalWrite(in3b,LOW);
    digitalWrite(in4b,LOW);    
    }   
   else
   
 {
  int otraValue= digitalRead(otra);
  int otcaValue= digitalRead(otca);
  int otlaValue= digitalRead(otla);
  int otrbValue= digitalRead(otrb);
  int otcbValue= digitalRead(otcb);
  int otlbValue= digitalRead(otlb);
  if (otraValue==LOW 
   && otcaValue==LOW 
   && otlaValue==HIGH 
   && otrbValue==HIGH
   && otcbValue==LOW
   && otlbValue==LOW)
 {  digitalWrite(in1a,HIGH);
  digitalWrite(in2a,LOW);
  analogWrite(ena,255);
   digitalWrite(in3b,HIGH);
   digitalWrite(in4b,LOW);
   analogWrite(enb,255);

   
 }
 else if)
         otraValue==LOW
      && otcaValue==LOW 
      && otlaValue==LOW
      && otrbValue==HIGH 
      && otcbValue==HIGH
      && otlbValue==LOW  )

{  analogWrite(ena,255); 
   digitalWrite(in1a,HIGH);
   digitalWrite(in2a,LOW);
   analogWrite(enb,180);
   digitalWrite(in3b,HIGH);
   digitalWrite(in4b,LOW);
    }
   
    else if (
         otraValue==LOW
      && otcaValue==HIGH 
      && otlaValue==HIGH
      && otrbValue==LOW
      && otcbValue==LOW
      && otlbValue==LOW
      )
     {
      analogWrite(ena,180);
      digitalWrite(in1a,HIGH);
      digitalWrite(in2a,LOW);
      analogWrite(enb,255);
      digitalWrite(in3b,HIGH);
      digitalWrite(in4b,LOW);
         
      }
    else if (
         otraValue==HIGH
      && otcaValue==HIGH 
      && otlaValue==HIGH
      && otrbValue==HIGH
      && otcbValue==HIGH
      && otlbValue==HIGH
      ) {
      analogWrite(ena,255);
      digitalWrite(in1a,LOW);
      digitalWrite(in2a,HIGH);
      analogWrite(enb,255);
      digitalWrite(in3b,LOW);
      digitalWrite(in4b,HIGH);
      //delay ??
        
        
        
        } 
     else if (
         otraValue==HIGH
      && otcaValue==HIGH 
      && otlaValue==HIGH
      && otrbValue==HIGH
      && otcbValue==HIGH
      && otlbValue==LOW
      )
 {
      
      analogWrite(ena,255); 
      digitalWrite(in1a,HIGH);
      digitalWrite(in2a,LOW);
      analogWrite(enb,250);
      digitalWrite(in3b,LOW);
      digitalWrite(in4b,HIGH);
        }
    else if (
         otraValue==LOW
      && otcaValue==HIGH
      && otlaValue==HIGH
      && otrbValue==HIGH
      && otcbValue==HIGH
      && otlbValue==HIGH
      ) 
 {

      
      analogWrite(ena,250); 
      digitalWrite(in1a,HIGH);
      digitalWrite(in2a,LOW);
      analogWrite(enb,255);
      digitalWrite(in3b,LOW);
      digitalWrite(in4b,HIGH);
         }

     else if (
         otraValue==LOW
      && otcaValue==LOW 
      && otlaValue==LOW
      && otrbValue==HIGH
      && otcbValue==HIGH
      && otlbValue==HIGH
      ) { 
      analogWrite(ena,250); 
      digitalWrite(in1a,HIGH);
      digitalWrite(in2a,LOW);
      analogWrite(enb,255);
      digitalWrite(in3b,LOW);
      digitalWrite(in4b,HIGH);      
        
        }
     else if (
         otraValue==HIGH
      && otcaValue==HIGH 
      && otlaValue==HIGH
      && otrbValue==LOW
      && otcbValue==LOW
      && otlbValue==LOW
      )
      {
      analogWrite(ena,255); 
      digitalWrite(in1a,LOW);
      digitalWrite(in2a,HIGH);
      analogWrite(enb,250);
      digitalWrite(in3b,HIGH);
      digitalWrite(in4b,LOW);          
        
        } 
    else if (
         otraValue==LOW
      && otcaValue==LOW 
      && otlaValue==HIGH
      && otrbValue==HIGH
      && otcbValue==HIGH
      && otlbValue==HIGH
      ){ 
      analogWrite(ena,240); 
      digitalWrite(in1a,HIGH);
      digitalWrite(in2a,LOW);
      analogWrite(enb,255);
      digitalWrite(in3b,HIGH);
      digitalWrite(in4b,LOW);}
     else if (
         otraValue==HIGH
      && otcaValue==HIGH 
      && otlaValue==HIGH
      && otrbValue==HIGH
      && otcbValue==LOW
      && otlbValue==LOW
      )      
       {
      analogWrite(ena,255); 
      digitalWrite(in1a,HIGH);
      digitalWrite(in2a,LOW);
      analogWrite(enb,250);
      digitalWrite(in3b,LOW);
      digitalWrite(in4b,HIGH);          
        
        }            
  else  {
     digitalWrite(in1a,LOW);
   digitalWrite(in2a,LOW);
   digitalWrite(in3b,LOW);
   digitalWrite(in4b,LOW);
     

  }
 }
 }
   
   
   
            
    
