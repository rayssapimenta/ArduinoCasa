int valorLDR = 0; //valor inicial do sensor
int LedPin = 2; 
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,INPUT);
  pinMode(LedPin,OUTPUT);
  Serial.begin(9600);
} 

void loop() {

  valorLDR = analogRead(A0); //sensor

  if (valorLDR < 50){
    digitalWrite(LedPin,HIGH); //
    delay(500);
  }else{
    digitalWrite(LedPin,LOW);
    delay(500);
  }
  Serial.print("Valor lido");
  Serial.println(valorLDR);
  delay(500);
  // put your main code here, to run repeatedly:

}
