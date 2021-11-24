int LED = 7;
int YLight = 4;
int btn1 = 5;
int btn2 = 6;
int buzzer = 11;
int val1;
int val2;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(YLight, OUTPUT);
  pinMode(btn1, INPUT);
  pinMode(btn2, INPUT);
  Serial.begin(6900); 

}

void loop() {
  val1 = analogRead(A1);
//  val2 = analogRead(A2);
  Serial.println(val1);
//  Serial.println(val2);
  if (val1 < 100){
    digitalWrite(LED, LOW);
//    digitalWrite(YLight, LOW);
    }
   else{
    digitalWrite(LED, HIGH);
//    digitalWrite(YLight, HIGH);
    }
}
