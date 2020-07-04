
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(LED_BUILTIN, OUTPUT); //LED on Model A  or Pro
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);               // wait for a second
  digitalWrite(LED_BUILTIN, LOW); 
  delay(1000);               // wait for a second
}
