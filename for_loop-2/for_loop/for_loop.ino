int LED[]= {17 ,2 ,15 ,12};
void setup() {
  Serial.begin(9600);
  pinMode(LED[0], OUTPUT);
  pinMode(LED[1], OUTPUT);
  pinMode(LED[2], OUTPUT);
  pinMode(LED[3], OUTPUT);
  
  digitalWrite(LED[0] , HIGH);
  digitalWrite(LED[1] , HIGH);
  digitalWrite(LED[2] , HIGH);
  digitalWrite(LED[3] , HIGH);

  for(int x = 0; x <=3; x++){
    digitalWrite(LED[0] , LOW);
    delay(100);
    digitalWrite(LED[0] , HIGH);
    delay(100);
    digitalWrite(LED[1] , LOW);
    delay(100);
    digitalWrite(LED[1] , HIGH);
    delay(100);
    digitalWrite(LED[2] , LOW);
    delay(100);
    digitalWrite(LED[2] , HIGH);
    delay(100);
    digitalWrite(LED[3] , LOW);
    delay(100);
    digitalWrite(LED[3] , HIGH);
    delay(100);
    digitalWrite(LED[2] , LOW);
    delay(100);
    digitalWrite(LED[2] , HIGH);
    delay(100);
    digitalWrite(LED[1] , LOW);
    delay(100);
    digitalWrite(LED[1] , HIGH);
    delay(100);
    }
  

}

void loop() {
  
}
