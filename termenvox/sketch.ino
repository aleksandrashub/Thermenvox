#define BUZZER_PIN 3
#define LDR_PIN A0
void setup() {
  // put your setup code here, to run once:
    pinMode(BUZZER_PIN, OUTPUT);





}

void loop() {
  // put your main code here, to run repeatedly:
  int dot = 300;
  int val, frequency;
//s

  val = analogRead(LDR_PIN);
  frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
  delay(dot);


val = analogRead(LDR_PIN);
frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
   delay(dot);

val = analogRead(LDR_PIN);
   frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
   delay(dot*3);

//o

val = analogRead(LDR_PIN);
   frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
   delay(dot*3);

val = analogRead(LDR_PIN);
   frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
   delay(dot*3);

val = analogRead(LDR_PIN);
   frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
   delay(dot*3);

//s

val = analogRead(LDR_PIN);
  frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
  delay(dot);


val = analogRead(LDR_PIN);
frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
   delay(dot);

val = analogRead(LDR_PIN);
   frequency = map(val, 0, 1023, 3500, 4500);
  tone(BUZZER_PIN, frequency, 60);
   delay(dot*3);


}
