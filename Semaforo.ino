int Rojo_A=1,Amarillo_A=2,Verde_A=3,Rojo_B=4,Amarillo_B=5,Verde_B=6;

void setup() {
  pinMode(Rojo_A, OUTPUT); //Rojo
  pinMode(Amarillo_A, OUTPUT); //Amarillo
  pinMode(Verde_A, OUTPUT); //Verde
  pinMode(Rojo_B, OUTPUT); //Rojo
  pinMode(Amarillo_B, OUTPUT); //Amarillo
  pinMode(Verde_B, OUTPUT); //Verde

}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(Rojo_A, HIGH); 
  digitalWrite(Verde_B, HIGH); 
  delay(3000);
  digitalWrite(Verde_B, LOW);
  digitalWrite(Amarillo_B, HIGH); 
  delay(3000);        
  digitalWrite(Amarillo_B, LOW);                
  digitalWrite(Rojo_A, LOW);   
  digitalWrite(Verde_A, HIGH);
  digitalWrite(Rojo_B, HIGH);   
  delay(3000); 
  digitalWrite(Verde_A, LOW); 
  digitalWrite(Amarillo_A, HIGH); 
  delay(3000);
  digitalWrite(Rojo_B, LOW);   
  digitalWrite(Amarillo_A, LOW);         
}
