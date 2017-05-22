/****************************************************************                                                             
**                       titulo :                              **                                                             
**                       Sirena                                **
**                                                             ** 
**    NOM : ABDELLAZIZ AARAB          DATA :xx/xx/2017         **                       
****************************************************************/                       
//************************ INCUDE *******************************



//*********************** VARIABLES *****************************




//************************* SETUP *******************************
void setup()
{
  pinMode(xiulet, OUTPUT);   // definir el pin 9 com una sortida
}

//********** Loop *****************************************************************
void loop()
{
  valPot0 = analogRead(pot0);   // llegir valor potenciòmetre 

  tone(xiulet, 800, valPot0);    // xiulet de durada valPot0
  delay(2*valPot0);  // esperar valPot0 del xiulet + valPot0 silenci
}
