// Analogie Average

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}


// get an average value from a jumpy or erratic input sensor.
const int getSensorAverageValue (const int sensorPin,
                                 const int numberOfSamples,
                                 const long timeGap)
{
  static int currentSample; // current sensor sample.
  static int currentValue;  // current sensor value.

  // current value works as a sum counter.
  currentValue = 0;

  // get sensor samples with delay and calculate the sum.
  for (int i = 0; i < numberOfSamples; i++) {
    // get sensor sample.
    currentSample = analogRead(sensorPin);

    // add sample to the sum counter.
    currentValue += currentSample;

    // delay some time for the next sample.
    delay(timeGap);
  }

  // get the average sensor value (ignore the fraction).
  return (currentValue / numberOfSamples);
}
