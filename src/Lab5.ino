SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);
void setup() {
  pinMode(A5, INPUT);
  pinMode(D5, OUTPUT);
  Serial.begin(9600);
}
int volts;
void loop() {
  volts = analogRead(A5);
  Serial.println(volts);
  int outPut = map(volts, 1, 1500, 0, 255);
  analogWrite(D5, outPut);
}