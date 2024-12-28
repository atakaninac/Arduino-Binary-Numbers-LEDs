const int pins[] = {13, 12, 11, 10, 9, 8, 7, 6};
const int pinCount = 8;
byte counter;

void setup(){
  Serial.begin(9600);
  for (int i=0; i<pinCount; i++){
    pinMode(pins[i], OUTPUT);
  }
  counter = 0;
}

void binaryDisplay(byte n){
  Serial.print("Displaying number: ");
  Serial.println(n);
  for (int j=0; j<pinCount; j++){
    digitalWrite(pins[j], n & 1);
    n /= 2;
  }
}

void loop(){
  binaryDisplay(counter++);
  delay(3000);
}
