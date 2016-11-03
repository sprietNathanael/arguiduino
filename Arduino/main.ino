void setLedState(char state);
void computeFrame(String frame);

// the setup function runs once when you press reset or power the board
void setup()
{
	// Open serial communications and wait for port to open:
	Serial.begin(115200);
	while (!Serial)
	{
		; // wait for serial port to connect. Needed for native USB port only
	}
	pinMode(LED_BUILTIN, OUTPUT);

	// print the welcome message
	Serial.println("--- Welcome to the Arguiduino serial interface ---");

}

// the loop function runs over and over again forever
void loop()
{
	String stringFromSerial = Serial.readString();
	if(stringFromSerial.length() > 0)
	{
		Serial.print("Received : "+stringFromSerial+"\n");
		computeFrame(stringFromSerial);
	}
}

void computeFrame(String frame)
{
	Serial.print("length : ");
	Serial.print(frame.length()-1);
	Serial.print("\n");
	if(frame.length()-1 == 2)
	{
		char opCode = frame[0];
		char data = frame[1];
		Serial.print("opCode : ");
		Serial.print(opCode);
		Serial.print(" , data : ");
		Serial.print(data);
		Serial.print("\n");
		if(opCode == '1')
		{
			setLedState(data);
		}
	}
}

void setLedState(char state)
{
	int stateToSet;
	if(state == '0')
	{
		stateToSet = LOW;
	}
	else
	{
		stateToSet = HIGH;
	}
	digitalWrite(LED_BUILTIN, stateToSet);
}