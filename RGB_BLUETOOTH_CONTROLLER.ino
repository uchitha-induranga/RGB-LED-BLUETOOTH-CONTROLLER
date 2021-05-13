char data =0;//variable for initiate the incoming text 

void setup() {
Serial.begin(9600);

pinMode(5,OUTPUT);//for red pin
pinMode(6,OUTPUT);//for green pin
pinMode(7,OUTPUT);//for blue pin
 }
 
void loop() {

 if(Serial.available()>0)// read the text 
   {   data= Serial.read();
       Serial.println(data);   

    if ( data == '1') { 
      
    digitalWrite(5,HIGH);
 
        
         }
   else if ( data == '2')
   {     
   digitalWrite(6,HIGH);
         
         }
   else if ( data == '3')
   {       
  digitalWrite(7,HIGH);
         
         }
  
    else if ( data == '4')
   {     
   digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
     digitalWrite(7,HIGH);
         }
     else if ( data == '5')
   {
    digitalWrite(6,LOW);
   digitalWrite(7,LOW);
   digitalWrite(5,HIGH);
   delay(1000);
   digitalWrite(6,HIGH);
   digitalWrite(5,LOW);
   delay(1000);
   digitalWrite(7,HIGH);
   digitalWrite(6,LOW);
   delay(1000);
   digitalWrite(5,HIGH);
   delay(1000);
   digitalWrite(7,LOW);
   digitalWrite(6,HIGH);
   digitalWrite(5,HIGH);
   delay(1000);
   digitalWrite(6,HIGH);
   digitalWrite(5,HIGH);
   digitalWrite(7,HIGH);
   delay(1000);
   
   } 
      else if ( data == '6')
{    
   digitalWrite(5,LOW);
    digitalWrite(6,LOW);
     digitalWrite(7,LOW);
         }

  
}
}
