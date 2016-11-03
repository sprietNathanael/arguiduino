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
		computeFrame(stringFromSerial);
	}
}

void computeFrame(String frame)
{
	int opCode = frame[0];
	int length = frame[1];
	if(opCode == 0x01)
	{
		changePinMode(frame.substring(2,length+2));
	}
	else if(opCode == 0x02)
	{
		writeState(frame.substring(2,length+2));
	}
}

void changePinMode(String data)
{
	int pinNumber = data[0];
	if(data[1] == 0x01)
	{
		pinMode(pinNumber, OUTPUT);
	}
	else if(data[1] == 0x02)
	{
		pinMode(pinNumber, INPUT);
	}
	else if(data[1] == 0x03)
	{
		pinMode(pinNumber, INPUT_PULLUP);
	}
}

void  writeState(String data)
{
	int pinNumber = data[0];
	int value = data[2];
	if(data[1] == 0x01)
	{
		if(value > 0)
		{
			digitalWrite(pinNumber, HIGH);
		}
		else
		{
			digitalWrite(pinNumber, LOW);
		}
	}
	else if(data[1] == 0x02)
	{
		analogWrite(pinNumber, value);
	}
}