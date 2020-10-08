// Oficina Virtual de Cubesats
// SNCT 2020 - Instituto Nacional de Pesquisas Espaciais - INPE
// Lazaro Camargo (lazaro.camargo@inpe.br)

// Teste do Sensor Solar

int sensor_solar = 0;
int valor;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  valor = analogRead(sensor_solar);
  Serial.println(valor);
  delay(500);
}
