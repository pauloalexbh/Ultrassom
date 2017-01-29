#include <ESP8266WiFi.h>
//Sensor Ultrassonico HC-SR04
 
//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>

 
//Define os pinos para o trigger e echo
#define pino_trigger 4
#define pino_echo 5
 
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo, 23200); //o terceiro termo é o tempo maximo em microsegundos.
 
void setup()
{
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}
 
void loop()
{
  //Le as informacoes do sensor, em cm
  int cmMsec;
  cmMsec = ultrasonic.Ranging(CM);
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  delay(4000);
}
