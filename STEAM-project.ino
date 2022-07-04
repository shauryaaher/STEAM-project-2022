void setup()
{
  // put your setup code here, to run once:
  pinMode(2, INPUT); // This is the sensor
  pinMode(3, OUTPUT); // LED
  pinMode(8, OUTPUT); // Buzzer
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (digitalRead(2) == HIGH) // Check if the sensor has detected an obstacle
  {
    digitalWrite(8, HIGH);
    digitalWrite(3, HIGH);
    delay(50);
    digitalWrite(8, LOW);
    digitalWrite(3, LOW);
    delay(50);
  }
  else
  { // If there is no obstacle, the LED will turn off
    digitalWrite(8, LOW);
    digitalWrite(3, LOW);
  }
}
