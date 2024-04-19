/*

*/
<Servo.h>
int ir_sensor = 3;
int LED = 13;
Servo leftWheel;
Servo rightWheel;

void setup() {
    pinMode(LED,OUTPUT);
    pinMode(ir_sensor,INPUT);
    leftWheel.attach(10);
    rightWheel.attach(11);
    Serial.begin(9600);
}

void loop() {
    if (digitalRead(ir_sensor)==LOW);
    {
      digitalWrite(LED,HIGH);
      Serial.println("Object detected ahead");
      leftWheel.write(77);
      rightWheel.write(87);
      
    }
    else
    {
      digitalWrite(LED,LOW);
    }
    delay(10)
}
