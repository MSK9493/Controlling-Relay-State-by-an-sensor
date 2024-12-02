#define IR 2
#define led 3

bool ir_val = 0 ;

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
pinMode(IR, INPUT);
pinMode(led,OUTPUT);
}

void loop() {
// put your main code here, to run repeatedly:
ir_val = digitalRead(IR);

if(ir_val == HIGH)
{
Serial.println("Led is OFF");
digitalWrite(led, LOW);
}

if(ir_val == LOW)
{
Serial.println("Led is ON");
digitalWrite(led, HIGH);
}
}
