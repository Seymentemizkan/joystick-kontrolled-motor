
const int y_eksen = A1;
const int x_eksen = A2;

int x_deger = 0;
int y_deger = 0;


#define IN1 3
#define IN2 5

void setup() {

  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  Serial.begin(9600);


}

void loop() {
  
  x_deger = analogRead(x_eksen);
  y_deger = analogRead(y_eksen);

  y_deger = map(y_deger, 0, 1023, 0, 255);

  x_deger = map(x_deger, 0, 1023, 0, 255);


  if (x_deger < 120) {
  analogWrite(IN2, y_deger);
  digitalWrite(IN1, HIGH);
  }
  else {
  analogWrite(IN1, y_deger);
  digitalWrite(IN2, HIGH);
  }




}








