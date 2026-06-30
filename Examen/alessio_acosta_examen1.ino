#include <Adafruit_LiquidCrystal.h>
#include <Adafruit_NeoPixel.h>

#define PIN 8
#define NUMPIXELS 6

int num_led;


void setup()  
{
  Adafruit_LiquidCrystal lcd ( 6, 5, 7, 2, 3, 4 );

  Adafruit_NeoPixel pixels(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);
  
  pinMode( 9 , INPUT_PULLUP );
  
  pinMode (A0, OUTPUT);
  
  pixels.begin();
  
  pixels.clear();
  
  pixels.show();
  
  Serial.begin(9600);
  
  lcd.begin(16,2);
}

void loop()
{
  Serial.print("Sensor: ");
  
  Serial.print("Porcentaje luz: ");
  
  Serial.print("Numero de led; ");
 
  Serial.print("Color: ");
  
  