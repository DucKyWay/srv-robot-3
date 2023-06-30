#include <Adafruit_LiquidCrystal.h>

Adafruit_LiquidCrystal lcd(0);

int led_1 = 5;
int led_2 = 4;
int led_3 = 3;

char wtfSerial = '0';
int state = 0;

void setup() {
  
    pinMode(led_1, OUTPUT);
    pinMode(led_2, OUTPUT);
    pinMode(led_3, OUTPUT);

    Serial.begin(9600);
    Serial.println("Program is Start.");

    digitalWrite(led_1, LOW);
    digitalWrite(led_2, LOW);
    digitalWrite(led_3, LOW);
  
    lcd.begin(16, 2);
    lcd.print("Hello World");
}

void loop() {
  
    if(Serial.available() > 0) {
        wtfSerial = Serial.read();
        Serial.print("State: ");
        Serial.println(wtfSerial);
    }
    if(wtfSerial == '0') {
    	digitalWrite(led_1, LOW);
        digitalWrite(led_2, LOW);
        digitalWrite(led_3, LOW);
        lcd.setCursor(0, 1);
        lcd.print("All LED is off");
        delay(1000);
    }
    if(wtfSerial == '1') {
        state = wtfSerial;
    	digitalWrite(led_1, HIGH);
        lcd_print();
    }
    if(wtfSerial == '2') {
        state = wtfSerial;
    	digitalWrite(led_2, HIGH);
        lcd_print();
    }
    if(wtfSerial == '3') {
        state = wtfSerial;
    	digitalWrite(led_3, HIGH);
        lcd_print();
    }
}   

void lcd_print(){
    lcd.clear();
    lcd.setCursor(0, 1);
    lcd.print("LED ");
    lcd.print(state - '0');
    lcd.print(" is on");
    delay(1000);
}