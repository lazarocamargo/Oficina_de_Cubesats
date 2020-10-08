# Oficina Virtual de Cubesats
# SNCT 2020 
# Lazaro Camargo (lazaro.camargo@inpe.br)

# Teste do Led indicador de Sol

int led_indicador_sol = 11;


void setup()
{
  pinMode(led_indicador_sol,OUTPUT);
  
}

void loop()
{
  digitalWrite(led_indicador_sol, HIGH);
  delay(1000);
  digitalWrite(led_indicador_sol, LOW);
  delay(1000);
  
}