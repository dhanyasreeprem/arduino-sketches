void setup() {
  pinMode(4, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {

  

  int pattern [] = {4, 13, 10 , 7, 10 , 13 , 4, 7, 10 , 13, 10, 4, 13, 7, 10, 4}; //which leds to turn on in sequence. 
for (int count = 0; count < 7; count ++){
    //pattern count gives me the note in the pattern that I have counted up to by now
    digitalWrite(pattern[count], HIGH);   
    delay(100);              
    digitalWrite(pattern[count], LOW);
    delay(100);
    digitalWrite(pattern[count], HIGH);           
    digitalWrite(pattern[count], HIGH);
    digitalWrite(pattern[count], LOW);          
    digitalWrite(pattern[count], LOW);
    digitalWrite(pattern[count], HIGH);               
    digitalWrite(pattern[count], LOW);
    delay(random(10,50));
    digitalWrite(pattern[count], HIGH);           
    digitalWrite(pattern[count], HIGH);
    digitalWrite(pattern[count], LOW);          
    digitalWrite(pattern[count], LOW);
    digitalWrite(pattern[count], HIGH);               
    digitalWrite(pattern[count], LOW);
    delay(random(100, 150));
    digitalWrite(pattern[count], HIGH);   
    delay(100);        
    digitalWrite(pattern[count], HIGH);
    delay(100);  
    digitalWrite(pattern[count], HIGH);
    delay(50);  
    digitalWrite(pattern[count], HIGH);
    delay(50);  
    digitalWrite(pattern[count], LOW);   
    delay(100);        
    digitalWrite(pattern[count], LOW);
    delay(100);
    digitalWrite(pattern[count], LOW);
    delay(100);
    digitalWrite(pattern[count], LOW);
    delay(250);
    digitalWrite(pattern[count], HIGH);           
    digitalWrite(pattern[count], HIGH);
    digitalWrite(pattern[count], HIGH);
    digitalWrite(pattern[count], HIGH);
    delay(2500); 
    digitalWrite(pattern[count], LOW);           
    digitalWrite(pattern[count], LOW);
    digitalWrite(pattern[count], LOW);
    digitalWrite(pattern[count], LOW);
             
    
  }
}

