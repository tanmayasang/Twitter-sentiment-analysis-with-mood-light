char command;
int konnected;
int rled = 13;
int bled = 7;
int gled = 2;

void setup() {
  
  Serial.begin(9600);
  pinMode(rled, OUTPUT);
  pinMode(gled, OUTPUT);
pinMode(bled, OUTPUT); 

}

void loop() {
  konnected = Serial.available();

  if(konnected) {
    command = Serial.read(); 
    
    if(command == 'F'){
        digitalWrite(gled,HIGH);
        delay(3000);
        digitalWrite(gled,LOW);
    }

     else if (command == 'B'){
       digitalWrite(rled,HIGH);
       delay(3000);
        digitalWrite(rled,LOW);
     }

     else if (command == 'N'){
       digitalWrite(bled,HIGH);
       delay(3000);
        digitalWrite(bled,LOW);
     }
     
  }
}
