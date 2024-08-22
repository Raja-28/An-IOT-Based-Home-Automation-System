#include <SoftwareSerial.h>

SoftwareSerial BTSerial(0, 1); // RX | TX (Pin 0 and 1)

const int relay1 = 2;
const int relay2 = 3;
const int relay3 = 4;
const int relay4 = 5;

void setup() {
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  
  BTSerial.begin(9600);
  Serial.begin(9600);
}

void loop() {
  if (BTSerial.available()) {
    char data = BTSerial.read();
    Serial.println(data);

    switch(data) {
      case '1':
        digitalWrite(relay1, LOW);  // Turn ON Relay 1
        break;
      case '2':
        digitalWrite(relay1, HIGH); // Turn OFF Relay 1
        break;
      case '3':
        digitalWrite(relay2, LOW);  // Turn ON Relay 2
        break;
      case '4':
        digitalWrite(relay2, HIGH); // Turn OFF Relay 2
        break;
      case '5':
        digitalWrite(relay3, LOW);  // Turn ON Relay 3
        break;
      case '6':
        digitalWrite(relay3, HIGH); // Turn OFF Relay 3
        break;
      case '7':
        digitalWrite(relay4, LOW);  // Turn ON Relay 4
        break;
      case '8':
        digitalWrite(relay4, HIGH); // Turn OFF Relay 4
        break;
      default:
        break;
    }
  }
}
