#include "Particle.h"

SYSTEM_THREAD(ENABLED);

SerialLogHandler logHandler;

const int DEEP_RESET_PIN = D2;

void buttonHandler();

void setup() {
	pinResetFast(DEEP_RESET_PIN);
	pinMode(DEEP_RESET_PIN, OUTPUT);

	System.on(button_click, buttonHandler);
}

void loop() {

}

void buttonHandler() {
	Log.info("about to deep reset");

	digitalWrite(DEEP_RESET_PIN, HIGH);

	delay(1000);
	Log.info("this should never be reached");
}
