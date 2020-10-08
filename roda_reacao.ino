// Oficina Virtual de Cubesats
// SNCT 2020 - Instituto Nacional de Pesquisas Espaciais - INPE
// Lazaro Camargo (lazaro.camargo@inpe.br)

// Teste da Roda de Reação

int roda_reacao = 3;

void setup()
{
	pinMode(roda_reacao, OUTPUT);  
}

void loop()
{
  digitalWrite(roda_reacao, HIGH);
  delay(2000);
  digitalWrite(roda_reacao, LOW);
  delay(1000);  
}