// C++ code
//
int zero = 0;

void setup()
{
  pinMode(13, INPUT); //مدخل المفتاح الخاص بالتحكم باتجاه حركة المحرك
  pinMode(3, OUTPUT); 
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(A0, INPUT); // مدخل المقاومة المتغيرة التي ستتحكم بالسرعة
}

void loop()
{
  digitalWrite(12, digitalRead(13)); //اتجاه حركة المحرك
    analogWrite(11, analogRead(A0)); //سرعة المحرك 
  digitalWrite(8, !digitalRead(13));
  digitalWrite(2, digitalRead(13));
  digitalWrite(7, !digitalRead(13));
    analogWrite(5, analogRead(A0));

  delay(10); // Delay a little bit to improve simulation performance
}