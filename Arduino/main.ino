// the setup function runs once when you press reset or power the board
void setup()
{
	// Open serial communications and wait for port to open:
	Serial.begin(115200);
	while (!Serial)
	{
		; // wait for serial port to connect. Needed for native USB port only
	}

	// print the welcome message
	Serial.println("--- Welcome to the Arguiduino serial interface ---");

}

// the loop function runs over and over again forever
void loop()
{
	String stringFromSerial = Serial.readString();
	if(stringFromSerial.length() > 0)
	{
		Serial.println("Received : "+stringFromSerial);
	}
}

