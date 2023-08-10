#define a 2
#define b 3
#define c 4
#define d 5
#define e 6
#define f 7
#define g 8
#define green_led 12
#define yellow_led 11
#define red_led 10

void dpDigit(int dg) {
    switch (dg) {
        case 0:
            digitalWrite(a, LOW);
            digitalWrite(b, LOW);
            digitalWrite(c, LOW);
            digitalWrite(d, LOW);
            digitalWrite(e, LOW);
            digitalWrite(f, LOW);
            digitalWrite(g, HIGH);
            break;
        case 1:
            digitalWrite(a, HIGH);
            digitalWrite(b, LOW);
            digitalWrite(c, LOW);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, HIGH);
            digitalWrite(g, HIGH);
            break;
        case 2:
            digitalWrite(a, LOW);
            digitalWrite(b, LOW);
            digitalWrite(c, HIGH);
            digitalWrite(d, LOW);
            digitalWrite(e, LOW);
            digitalWrite(f, HIGH);
            digitalWrite(g, LOW);
            break;
        case 3:
            digitalWrite(a, LOW);
            digitalWrite(b, LOW);
            digitalWrite(c, LOW);
            digitalWrite(d, LOW);
            digitalWrite(e, HIGH);
            digitalWrite(f, HIGH);
            digitalWrite(g, LOW);
            break;
        case 4:
            digitalWrite(a, HIGH);
            digitalWrite(b, LOW);
            digitalWrite(c, LOW);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, LOW);
            digitalWrite(g, LOW);
            break;
        case 5:
            digitalWrite(a, LOW);
            digitalWrite(b, HIGH);
            digitalWrite(c, LOW);
            digitalWrite(d, LOW);
            digitalWrite(e, HIGH);
            digitalWrite(f, LOW);
            digitalWrite(g, LOW);
            break;
        case 6:
            digitalWrite(a, LOW);
            digitalWrite(b, HIGH);
            digitalWrite(c, LOW);
            digitalWrite(d, LOW);
            digitalWrite(e, LOW);
            digitalWrite(f, LOW);
            digitalWrite(g, LOW);
            break;
        case 7:
            digitalWrite(a, LOW);
            digitalWrite(b, LOW);
            digitalWrite(c, LOW);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, HIGH);
            digitalWrite(g, HIGH);
            break;
        case 8:
            digitalWrite(a, LOW);
            digitalWrite(b, LOW);
            digitalWrite(c, LOW);
            digitalWrite(d, LOW);
            digitalWrite(e, LOW);
            digitalWrite(f, LOW);
            digitalWrite(g, LOW);
            break;
        case 9:
            digitalWrite(a, LOW);
            digitalWrite(b, LOW);
            digitalWrite(c, LOW);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, LOW);
            digitalWrite(g, LOW);
            break;
        default:
            break;
    }
}



void setup() {

    pinMode(a, OUTPUT);
    pinMode(b, OUTPUT);
    pinMode(c, OUTPUT);
    pinMode(d, OUTPUT);
    pinMode(e, OUTPUT);
    pinMode(f, OUTPUT);
    pinMode(g, OUTPUT);

    pinMode(green_led, OUTPUT);
    pinMode(yellow_led, OUTPUT);
    pinMode(red_led, OUTPUT);

    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);

}

void loop() {

    int i = 0;

    for (i = 9; i >= 4; i--) {
        digitalWrite(red_led, HIGH);
        dpDigit(i);
        delay(1000);
    }
    digitalWrite(red_led, LOW);

    for (i = 3; i >= 1; i--) {
        digitalWrite(yellow_led, HIGH);
        dpDigit(i);
        delay(1000);
    }
    digitalWrite(yellow_led, LOW);

    for (i = 9; i >= 1; i--) {
        digitalWrite(green_led, HIGH);
        dpDigit(i);
        delay(1000);
    }

}