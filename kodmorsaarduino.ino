int message = 0; // This will hold one byte of the serial message
int LEDPin = 13; // This is the pin that the led is conected to

void setup() {
  Serial.begin(9600); //set serial to 9600 baud rate
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  if (Serial.available() > 0) { // Check to see if there is a new message
message = Serial.read(); // Put the serial input into the message

if (message == '.'){ // If a dot is received
digitalWrite(LED_BUILTIN, HIGH); // LED on
delay(500);
digitalWrite(LED_BUILTIN, LOW);
delay(500);
digitalWrite(LED_BUILTIN, LOW);
delay(3000);
Serial.println("dot"); // Send back LED on
}
if (message == '-'){ // If a dash is received
digitalWrite(LED_BUILTIN, HIGH);
delay(1500);
digitalWrite(LED_BUILTIN, LOW);
delay(3000);// LED off
Serial.println("dash"); // Send back LED off
}
}                    // wait for a second
}
