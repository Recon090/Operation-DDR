/*
Last edited 6/22/25 by Pawel Chowdhury
*/


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(14, INPUT_PULLDOWN);
}

// the loop function runs over and over again forever
void loop() {
  int level = analogRead(14);
  // Print "Analog value:" in serial monitor
  Serial.println("Analog value:");
  // Print output voltage in serial monitor
  Serial.println(level);
  if(level >200){ //error here, when this value is adjusted the monitor reads a higher default value
  digitalWrite(LED_BUILTIN, HIGH);  // turn the LED on (HIGH is the voltage level)
  delay(1000);                      // wait for a second
  digitalWrite(LED_BUILTIN, LOW);   // turn the LED off by making the voltage LOW
  delay(1000);                      // wait for a second
  }
}
