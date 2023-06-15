 int LED = 9;
int ALCOHOL sensor= 3; // MQ-6 SENSOR
int ALCOHOL detected;
int MOTOR = 2 void setup()
Serial.begin(9600);
pinMode(LED, OUTPUT);
pinMode(ALCOHOL sensor, INPUT);
pinMode(Motor, OUTPUT);
void loop() 
{
       ALCOHOL detected = digitalRead(ALCOHOL_sensor);
}
Serial.println(ALCOHOL_detected);
if (ALCOHOL detected == 1) 
{
           Serial.println("ALCOHOL detected...");
           digitalWrite(LED, HIGH);
           digitalWrite(MOTOR, LOW);
} 
else 
{
     Serial.println("No ALCOHOL detected ");
     digitalWrite(LED, LOW);
     digitalWrite(MOTOR, HIGH);
}
}
