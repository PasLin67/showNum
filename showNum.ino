#define SEGA 6
#define SEGB 7
#define SEGC 9
#define SEGD 10
#define SEGE 11
#define SEGF 5
#define SEGG 4
#define SEGDP 8
#define LEDON LOW
#define LEDOFF HIGH
#define WAIT 800


void setup() {
  
  pinMode(SEGA, OUTPUT); //11
  pinMode(SEGB, OUTPUT); //10
  pinMode(SEGC, OUTPUT); //9
  pinMode(SEGD, OUTPUT); //8
  pinMode(SEGE, OUTPUT); //7
  pinMode(SEGF, OUTPUT); //6
  pinMode(SEGG, OUTPUT); //5
  pinMode(SEGDP, OUTPUT); //4
}

void num0(){
  digitalWrite(SEGA, LEDON);
  digitalWrite(SEGB, LEDON);
  digitalWrite(SEGC, LEDON);
  digitalWrite(SEGD, LEDON);
  digitalWrite(SEGE, LEDON);
  digitalWrite(SEGF, LEDON);
  digitalWrite(SEGG, LEDOFF);
  digitalWrite(SEGDP, LEDON);
}
void num1(){
  digitalWrite(SEGA, LEDOFF);
  digitalWrite(SEGB, LEDON);
  digitalWrite(SEGC, LEDON);
  digitalWrite(SEGD, LEDOFF);
  digitalWrite(SEGE, LEDOFF);
  digitalWrite(SEGF, LEDOFF);
  digitalWrite(SEGG, LEDOFF);
  digitalWrite(SEGDP, LEDON);
}
void num2(){
  digitalWrite(SEGA, LEDON);
  digitalWrite(SEGB, LEDON);
  digitalWrite(SEGC, LEDOFF);
  digitalWrite(SEGD, LEDON);
  digitalWrite(SEGE, LEDON); 
  digitalWrite(SEGF, LEDOFF);
  digitalWrite(SEGG, LEDON); 
  digitalWrite(SEGDP,LEDON);
}
void num3(){
  digitalWrite(SEGA, LEDON);
  digitalWrite(SEGB, LEDON);
  digitalWrite(SEGC, LEDON); 
  digitalWrite(SEGD, LEDON);
  digitalWrite(SEGE, LEDOFF);
  digitalWrite(SEGF, LEDOFF);
  digitalWrite(SEGG, LEDON);
  digitalWrite(SEGDP, LEDON);
}
void num4(){
  digitalWrite(SEGA, LEDOFF);
  digitalWrite(SEGB, LEDON);
  digitalWrite(SEGC, LEDON);
  digitalWrite(SEGD, LEDOFF);
  digitalWrite(SEGE, LEDOFF);
  digitalWrite(SEGF, LEDON);
  digitalWrite(SEGG, LEDON);
  digitalWrite(SEGDP, LEDON);
}
void num5(){
  digitalWrite(SEGA, LEDON);
  digitalWrite(SEGB, LEDOFF);
  digitalWrite(SEGC, LEDON);
  digitalWrite(SEGD, LEDON);
  digitalWrite(SEGE, LEDOFF);
  digitalWrite(SEGF, LEDON);
  digitalWrite(SEGG, LEDON);
  digitalWrite(SEGDP, LEDON);
}
void num6(){
  digitalWrite(SEGA, LEDON);
  digitalWrite(SEGB, LEDOFF);
  digitalWrite(SEGC, LEDON);
  digitalWrite(SEGD, LEDON);
  digitalWrite(SEGE, LEDON);
  digitalWrite(SEGF, LEDON);
  digitalWrite(SEGG, LEDON);
  digitalWrite(SEGDP, LEDON);
}
void num7(){
  digitalWrite(SEGA, LEDON);
  digitalWrite(SEGB, LEDON);
  digitalWrite(SEGC, LEDON); 
  digitalWrite(SEGD, LEDOFF);
  digitalWrite(SEGE, LEDOFF);
  digitalWrite(SEGF, LEDOFF);
  digitalWrite(SEGG, LEDOFF);
  digitalWrite(SEGDP, LEDON);
}
void num8(){
  digitalWrite(SEGA, LEDON);
  digitalWrite(SEGB, LEDON);
  digitalWrite(SEGC, LEDON);
  digitalWrite(SEGE, LEDON);
  digitalWrite(SEGF, LEDON);
  digitalWrite(SEGG, LEDON);
  digitalWrite(SEGDP, LEDON);
}
void num9(){
  digitalWrite(SEGA, LEDON);
  digitalWrite(SEGB, LEDON);
  digitalWrite(SEGC, LEDOFF);
  digitalWrite(SEGD, LEDON);
  digitalWrite(SEGE, LEDON);
  digitalWrite(SEGF, LEDON);
  digitalWrite(SEGG, LEDON);
  digitalWrite(SEGDP, LEDON);
} 

void showNum(int num){
  //riippuen num muuttujan arvosta piirtää kyseisen numeron näytölle
  
   if(num == 0){
    num0();// Sytytetään 0
   }else if(num == 1){
    num1(); // Sytytetään 1
   }else if(num == 2){
    num2();
   }else if(num == 3){
    num3();
   }
   }
   

    
 


void loop(){
  showNum(3);
}
