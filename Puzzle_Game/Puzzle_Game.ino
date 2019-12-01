/*
 * Contributors: Zaza Hashmi, Hareer Al-Rubaye
 * Date: November 30th 2019
 * Assignment: PUZZLE PROGRAM WITH BSING TECHNIQUES
 */
 //This block of code is the initialization of pins to the 7 segments of the FIRST display
int num1pA = 0;
int num1pB = 1;
int num1pC = 2;
int num1pD = 3;
int num1pE = 4;
int num1pF = 5;
int num1pG = 6;

 //This block of code is the initialization of pins to the 7 segments of the SECOND display
int num2pA = 7;
int num2pB = 8;
int num2pC = 9;
int num2pD = 10;
int num2pE = 11;
int num2pF = 12;
int num2pG = 13;

//Booleans controlling procession to the next level
int userGuess1 = 0;
int userGuess2 = 0;
int userGuess3 = 0;
int userGuess4 = 0;

//Original answers to coded riddles
String answer1 = "ok boomer";
String answer2 = "ok zoomer";
String answer3 = "girl power";
String answer4 = "congratulations";

//variable storing input from serial window
String line;

void setup() { // put your setup code here, to run once: Basically all initialization needing to be done goes in here.
  for (int i = 0; i <= 13; i++){
    pinMode(i, OUTPUT); //Set all pins from 0 to 13 as OUTPUT to all diff LED portions
  }
  Serial.begin(9600); //sets up serial window
  //series of instructions it prints to the user at the start of the game.
  Serial.println("Hi!");
  Serial.println("This program is a game!");
  Serial.println("The 2 7-segment-displays will display a numerical value, which corresponds to a letter.");
  Serial.println("For Example: Hi = 0809");
  Serial.println("WARNING: Please prepare a sheet of paper in order to write down the numerical values");
  Serial.println("You have 30 seconds to guess each word, otherwise you start seeing the numbers again! Then you gotta wait all over again ;)");
  //CODE key
  Serial.println(" a = 01   b = 02    c = 03    d = 04    e = 05    f = 06    g = 07    h = 08    i = 09    j = 10 ");
  Serial.println(" k = 11   l = 12    m = 13    n = 14    o = 15    p = 16    q = 17    r = 18    s = 19    t = 20 ");
  Serial.println(" u = 21   v = 22    w = 23    x = 24    y = 25    z = 26");
}

void loop() {  // put your main code here, to run repeatedly:
  while(userGuess1 == 0){ //loop for first round of puzzle
    lvlOne();
    readInput();
    if(answer1.compareTo(line) == 0){
      userGuess1 = 1;
      Serial.println("CORRECT. NOW FOR LEVEL TWO");
    }
    else if(answer1 != (line)){
      Serial.println("TRY AGAIN HAHA");
    }
  }
  while(userGuess2 == 0){ //second round of puzzle game
    lvlTwo();
    readInput();
    if(answer2.compareTo(line) == 0){
      userGuess2 = 1;
      Serial.println("CORRECT. NOW FOR LEVEL THREE");
    }
    else if(answer2 != (line)){
      Serial.println("TRY AGAIN HAHA");
    }
  }
  while(userGuess3 == 0){   //third round
    lvlThree();
    readInput();
    if(answer3.compareTo(line) == 0){
      userGuess3 = 1;
      Serial.println("CORRECT. NOW FOR LEVEL FOUR");
    }
    else if(answer3 != (line)){
      Serial.println("TRY AGAIN HAHA");
    }
  }
  while(userGuess4 == 0){ //fourth round
    lvlFour();
    readInput();
    if(answer4.compareTo(line) == 0){
      userGuess4 = 1;
      Serial.println("CORRECT. YOU WIN!");
    }
    else if(answer4 != (line)){
      Serial.println("TRY AGAIN HAHA");
    }
  }
}

void readInput(){   //function to read input from serial window
while(Serial.available() >= 2){
  line = Serial.readStringUntil('\n');
  }
}

void lvlOne(){ //This is the first level! It will blink the numbers for each letter.
  clearer();
  delay(5000);
  ssd1no1();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no1();
  delay(4000);
  ssd1no0();
  ssd2no2();
  delay(2000);
  ssd1no1();
  ssd2no5();
  delay(2000);
  clearer();
  delay(500);
  ssd1no1();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no3();
  delay(2000);
  ssd1no0();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no8();
  delay(30000);
}

void lvlTwo(){
  clearer();
  delay(5000);
  ssd1no1();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no1();
  delay(4000);
  ssd1no2();
  ssd2no6();
  delay(2000);
  ssd1no1();
  ssd2no5();
  delay(2000);
  clearer();
  delay(500);
  ssd1no1();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no3();
  delay(2000);
  ssd1no0();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no8();
  delay(30000);
}
void lvlThree(){
  clearer();
  delay(5000);
  ssd1no0();
  ssd2no7();
  delay(2000);
  ssd1no0();
  ssd2no9();
  delay(2000);
  ssd1no1();
  ssd2no8();
  delay(2000);
  ssd1no1();
  ssd2no2();
  delay(4000);
  ssd1no1();
  ssd2no6();
  delay(2000);
  ssd1no1();
  ssd2no5();
  delay(2000);
  ssd1no2();
  ssd2no3();
  delay(2000);
  ssd1no0();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no8();
  delay(30000);
}

void lvlFour(){
  clearer();
  delay(5000);
  ssd1no0();
  ssd2no3();
  delay(2000);
  ssd1no1();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no4();
  delay(2000);
  ssd1no0();
  ssd2no7();
  delay(2000);
  ssd1no1();
  ssd2no8();
  delay(2000);
  ssd1no0();
  ssd2no1();
  delay(2000);
  ssd1no2();
  ssd2no0();
  delay(2000);
  ssd1no2();
  ssd2no1();
  delay(2000);
  ssd1no1();
  ssd2no2();
  delay(2000);
  ssd1no0();
  ssd2no1();
  delay(2000);
  ssd1no2();
  ssd2no0();
  delay(2000);
  ssd1no0();
  ssd2no9();
  delay(2000);
  ssd1no1();
  ssd2no5();
  delay(2000);
  ssd1no1();
  ssd2no4();
  delay(2000);
  ssd1no1();
  ssd2no9();
  delay(30000);
}

void clearer(){   //clears both displays and resets them to zero.
  digitalWrite(num1pA, LOW);
  digitalWrite(num1pB, LOW);
  digitalWrite(num1pC, LOW);
  digitalWrite(num1pD, LOW);
  digitalWrite(num1pE, LOW);
  digitalWrite(num1pF, LOW);
  digitalWrite(num1pG, LOW);
  digitalWrite(num2pA, LOW);
  digitalWrite(num2pB, LOW);
  digitalWrite(num2pC, LOW);
  digitalWrite(num2pD, LOW);
  digitalWrite(num2pE, LOW);
  digitalWrite(num2pF, LOW);
  digitalWrite(num2pG, LOW);
}

void ssd1no0(){
  digitalWrite(num1pA, HIGH);
  digitalWrite(num1pB, HIGH);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, HIGH);
  digitalWrite(num1pE, HIGH);
  digitalWrite(num1pF, HIGH);
  digitalWrite(num1pG, LOW);
}
void ssd1no1(){
  digitalWrite(num1pA, LOW);
  digitalWrite(num1pB, HIGH);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, LOW);
  digitalWrite(num1pE, LOW);
  digitalWrite(num1pF, LOW);
  digitalWrite(num1pG, LOW);
}

void ssd1no2(){
  digitalWrite(num1pA, HIGH);
  digitalWrite(num1pB, HIGH);
  digitalWrite(num1pC, LOW);
  digitalWrite(num1pD, HIGH);
  digitalWrite(num1pE, HIGH);
  digitalWrite(num1pF, LOW);
  digitalWrite(num1pG, HIGH);
}

void ssd1no3(){
  digitalWrite(num1pA, HIGH);
  digitalWrite(num1pB, HIGH);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, HIGH);
  digitalWrite(num1pE, LOW);
  digitalWrite(num1pF, LOW);
  digitalWrite(num1pG, HIGH);
}

void ssd1no4(){
  digitalWrite(num1pA, LOW);
  digitalWrite(num1pB, HIGH);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, LOW);
  digitalWrite(num1pE, LOW);
  digitalWrite(num1pF, HIGH);
  digitalWrite(num1pG, HIGH);
}

void ssd1no5(){
  digitalWrite(num1pA, HIGH);
  digitalWrite(num1pB, LOW);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, HIGH);
  digitalWrite(num1pE, LOW);
  digitalWrite(num1pF, HIGH);
  digitalWrite(num1pG, HIGH);
}

void ssd1no6(){
  digitalWrite(num1pA, HIGH);
  digitalWrite(num1pB, LOW);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, HIGH);
  digitalWrite(num1pE, HIGH);
  digitalWrite(num1pF, HIGH);
  digitalWrite(num1pG, HIGH);
}
void ssd1no7(){
  digitalWrite(num1pA, HIGH);
  digitalWrite(num1pB, HIGH);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, LOW);
  digitalWrite(num1pE, LOW);
  digitalWrite(num1pF, LOW);
  digitalWrite(num1pG, LOW);
}
void ssd1no8(){
  digitalWrite(num1pA, HIGH);
  digitalWrite(num1pB, HIGH);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, HIGH);
  digitalWrite(num1pE, HIGH);
  digitalWrite(num1pF, HIGH);
  digitalWrite(num1pG, HIGH);
}
void ssd1no9(){
  digitalWrite(num1pA, HIGH);
  digitalWrite(num1pB, HIGH);
  digitalWrite(num1pC, HIGH);
  digitalWrite(num1pD, HIGH);
  digitalWrite(num1pE, LOW);
  digitalWrite(num1pF, HIGH);
  digitalWrite(num1pG, HIGH);
}
void ssd2no0(){
  digitalWrite(num2pA, HIGH);
  digitalWrite(num2pB, HIGH);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, HIGH);
  digitalWrite(num2pE, HIGH);
  digitalWrite(num2pF, HIGH);
  digitalWrite(num2pG, LOW);
}
void ssd2no1(){
  digitalWrite(num2pA, LOW);
  digitalWrite(num2pB, HIGH);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, LOW);
  digitalWrite(num2pE, LOW);
  digitalWrite(num2pF, LOW);
  digitalWrite(num2pG, LOW);
}

void ssd2no2(){
  digitalWrite(num2pA, HIGH);
  digitalWrite(num2pB, HIGH);
  digitalWrite(num2pC, LOW);
  digitalWrite(num2pD, HIGH);
  digitalWrite(num2pE, HIGH);
  digitalWrite(num2pF, LOW);
  digitalWrite(num2pG, HIGH);
}

void ssd2no3(){
  digitalWrite(num2pA, HIGH);
  digitalWrite(num2pB, HIGH);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, HIGH);
  digitalWrite(num2pE, LOW);
  digitalWrite(num2pF, LOW);
  digitalWrite(num2pG, HIGH);
}

void ssd2no4(){
  digitalWrite(num2pA, LOW);
  digitalWrite(num2pB, HIGH);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, LOW);
  digitalWrite(num2pE, LOW);
  digitalWrite(num2pF, HIGH);
  digitalWrite(num2pG, HIGH);
}

void ssd2no5(){
  digitalWrite(num2pA, HIGH);
  digitalWrite(num2pB, LOW);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, HIGH);
  digitalWrite(num2pE, LOW);
  digitalWrite(num2pF, HIGH);
  digitalWrite(num2pG, HIGH);
}

void ssd2no6(){
  digitalWrite(num2pA, HIGH);
  digitalWrite(num2pB, LOW);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, HIGH);
  digitalWrite(num2pE, HIGH);
  digitalWrite(num2pF, HIGH);
  digitalWrite(num2pG, HIGH);
}
void ssd2no7(){
  digitalWrite(num2pA, HIGH);
  digitalWrite(num2pB, HIGH);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, LOW);
  digitalWrite(num2pE, LOW);
  digitalWrite(num2pF, LOW);
  digitalWrite(num2pG, LOW);
}
void ssd2no8(){
  digitalWrite(num2pA, HIGH);
  digitalWrite(num2pB, HIGH);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, HIGH);
  digitalWrite(num2pE, HIGH);
  digitalWrite(num2pF, HIGH);
  digitalWrite(num2pG, HIGH);
}
void ssd2no9(){
  digitalWrite(num2pA, HIGH);
  digitalWrite(num2pB, HIGH);
  digitalWrite(num2pC, HIGH);
  digitalWrite(num2pD, HIGH);
  digitalWrite(num2pE, LOW);
  digitalWrite(num2pF, HIGH);
  digitalWrite(num2pG, HIGH);
}
