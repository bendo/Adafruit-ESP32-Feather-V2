int led = LED_BUILTIN;

void setup() {
	Serial.begin(115200);
	pinMode(led, OUTPUT);
}

void loop() {
	Serial.println("Hello!");
	digitalWrite(led, HIGH);
	delay(1000);
	digitalWrite(led, LOW);
	delay(1000);
}
