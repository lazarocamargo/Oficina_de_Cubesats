// Oficina Virtual de Cubesats
// SNCT 2020 - Instituto Nacional de Pesquisas Espaciais - INPE
// Lazaro Camargo (lazaro.camargo@inpe.br)

// Teste do sensor de temperatura

int sensor_temperatura = 1; 

void setup()
{
  Serial.begin(9600);  
}
 
void loop()                     
{
 
 int valor = analogRead(sensor_temperatura);  
 
 float voltagem = valor * 5.0;
 voltagem = voltagem / 1024.0; 
 
 float temperatura = (voltagem - 0.5) * 100 ;  
 Serial.println(temperatura); 
 
 delay(500);                         
}