#include<LiquidCrystal.h>
const int rs = 7, e = 6, d4 = 3, d5 = 4, d6 = 5, d7 = 9;
LiquidCrystal lcd(rs, e, d4, d5, d6, d7);
const int TDS = A1;
const int pH = A2;
const int Temp = A3;

void setup()
{
  lcd.begin(20, 4);           //Sets up the LCD's number of columns and rows
  lcd.clear();                //Clears any existing data on LCD
  
  pinMode(Temp, INPUT);       //Temperature sensor data pin
  pinMode(TDS, INPUT);        //TDS sensor data pin
  pinMode(pH, INPUT);         //pH sensor data pin
}

void loop()
{
  lcd.setCursor(0,0);         //Sets cursor to point (0,0)
  lcd.print("pH Level: ");    //Prints pH Level: to LCD
  lcd.print(analogRead(pH));  //Prints value of pH sensor to LCD
  lcd.setCursor(0,2);         //Sets cursor to point (0,2)
  lcd.print("TDS Level: ");   //Prints TDS Level: to LCD
  lcd.print(analogRead(TDS)); //Prints value of TDS sensor to LCD
  lcd.setCursor(0,4);         //Sets cursor to point (0,4)
  lcd.print("Temperature: "); // Prints Temperature to LCD
  lcd.print(analogRead(Temp));//Prints value of Temperature sensor to LCD
}
