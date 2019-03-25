// Define our board led
int boardLed = D7;

void setup() {
    // Set pinmode of our board led
    pinMode(boardLed, OUTPUT);
    
}

void loop() {
    // J
    digitalWrite(boardLed, HIGH);
    delay(500);
    digitalWrite(boardLed, LOW);
    delay(300);
    digitalWrite(boardLed, HIGH);
    delay(1000);
    digitalWrite(boardLed, LOW);
    delay(300);
    digitalWrite(boardLed, HIGH);
    delay(1000);
    digitalWrite(boardLed, LOW);
    delay(300);
    digitalWrite(boardLed, HIGH);
    delay(1000);
    digitalWrite(boardLed, LOW);
    delay(300);
    // A
    digitalWrite(boardLed, HIGH);
    delay(500);
    digitalWrite(boardLed, LOW);
    delay(300);
    digitalWrite(boardLed, HIGH);
    delay(1000);
    digitalWrite(boardLed, LOW);
    delay(300);
    // M
    digitalWrite(boardLed, HIGH);
    delay(1000);
    digitalWrite(boardLed, LOW);
    delay(300);
    digitalWrite(boardLed, HIGH);
    delay(1000);
    digitalWrite(boardLed, LOW);
    delay(300);
    // E
    digitalWrite(boardLed, HIGH);
    delay(500);
    digitalWrite(boardLed, LOW);
    delay(300);
    // S
    digitalWrite(boardLed, HIGH);
    delay(500);
    digitalWrite(boardLed, LOW);
    delay(300);
    digitalWrite(boardLed, HIGH);
    delay(500);
    digitalWrite(boardLed, LOW);
    delay(300);
    digitalWrite(boardLed, HIGH);
    delay(500);
    digitalWrite(boardLed, LOW);
    delay(300);
}