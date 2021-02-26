/* https://en.wikipedia.org/wiki/Fizz_buzz */

void setup() {
  Serial.begin(115200);
  Serial.println("\n\nFizzbuzz Arduino home edition\n");

  uint8_t cnt{0};
  bool fb{false};

  while (cnt++ != 100) {
    //Serial.printf("%i ", cnt);    //uncomment to show all numbers preceding
    switch (cnt % 3) {
      case 0: {
          Serial.print("Fizz");
          fb = true;
        }
      default: {
          switch (cnt % 5) {
            case 0:  {
                Serial.print("Buzz");
                fb = true;
              }
            default: {}
          }
        }
    }
    Serial.println(fb ? "" : String(cnt));
    fb = false;
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
