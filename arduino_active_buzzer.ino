
// Constants are read-only and do not change. Pin numbers are defined here.
const int buttonPin = 8;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin
const int buzzerPin = 7;     // the number of the buzzer pin

// Variable for button state. This will change.
int buttonState = 0;         // button status

void setup() {
  // Initialize LED pin as output:
  pinMode(ledPin, OUTPUT);
  // initialize button pin as input:
  pinMode(buttonPin, INPUT);
  // initialize buzzer pin as output:
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  // Read the state of the button value:
  buttonState = digitalRead(buttonPin);

  // Check whether the button has been pressed. If yes, the buttonState is HIGH:
  if (buttonState == HIGH) {

    // Alarm
    digitalWrite(ledPin, HIGH);
    delay(1000);
    tone(buzzerPin, 1000, 500);
    delay(1000);
    digitalWrite(ledPin, LOW);

    delay(1000);
    
    digitalWrite(ledPin, HIGH);
    delay(1000);
    tone(buzzerPin, 1000, 500);
    delay(1000);
    digitalWrite(ledPin, LOW);

    delay(1000);
       
    digitalWrite(ledPin, HIGH);
    delay(10000);
  } else {
    // Turn off the LED
    digitalWrite(ledPin, LOW);
  }
}

