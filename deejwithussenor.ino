const int trigPin = 12; //change these to your ultrasonic sensor pins
const int echoPin = 13; //change these to your ultrasonic sensor pins
void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
}

void loop() {
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH) * 0.5;
    Serial.println(duration);
  
}
