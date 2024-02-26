int input = 0;
int speaker = 3;
int inputRead = 0;
boolean playing = false;
void setup() {
  // put your setup code here, to run once:
pinMode(input,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
inputRead = digitalRead(input);
Serial.print("Button =");
Serial.println(inputRead);
if(inputRead = HIGH) {
  boolean playing = true;
}
while(playing = true) {
  tone(speaker,100);
}
}
