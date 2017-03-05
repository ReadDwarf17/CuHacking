byte latcP = 9;
byte clocP = 8;
//byte LRedP = 7;
//byte LGreP = 6;
//byte LBluP = 5;
//byte RRedP = 4;
//byte RGreP = 3;
//byte RBluP = 2;
byte dataArray[6][8];

//0, left red
//1, left green
//2, left blue
//3, right red
//4, right green
//5, right blue

void setup() {
  Serial.begin(9600);
//  for (int i = 2; i < 10; i++) {
//    pinMode(i, OUTPUT);
//  }
//  digitalWrite(latcP, HIGH);
//  for (int i = 0; i < 6; i++) {
//    for (int j = 0; j < 8; j++) {
//      dataArray[i][j] = 1;
//    }
//  }
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(4, OUTPUT);
}

void loop() {
  writeTo();
}

void writeTo() {
  /*digitalWrite(latcP, LOW);
  digitalWrite(clocP,LOW);
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 8; j++) {
      digitalWrite(clocP, LOW);
      
      digitalWrite(j+2, dataArray[i][j]);
      //Serial.println(dataArray[i][j]);
      digitalWrite(clocP, HIGH);
    }
  }
  digitalWrite(latcP, HIGH);*/
  digitalWrite(clocP,LOW);
  digitalWrite(latcP,LOW);
  //digitalWrite(clocP, LOW);
  digitalWrite(4, 1);
  digitalWrite(clocP, HIGH);
  digitalWrite(latcP,HIGH);
}

