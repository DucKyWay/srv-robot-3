int a = 2;
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;

void dpDigit(int dg) {
    switch (dg) {
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
        case 7:
            digitalWrite(a, LOW);
            digitalWrite(b, LOW);
            digitalWrite(c, LOW);
            digitalWrite(d, HIGH);
            digitalWrite(e, HIGH);
            digitalWrite(f, HIGH);
            digitalWrite(g, HIGH);
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
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
}

void loop() {

    dpDigit(3);
    delay(1000);

    dpDigit(7);
    delay(1000);
    
    dpDigit(2);
    delay(1000);
    
    dpDigit(9);
    delay(1000);
    
    dpDigit(9);
    delay(1000);
}