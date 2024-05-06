#include <Wire.h>
#include <Zumo32U4.h>

Zumo32U4Motors motors;
Zumo32U4ButtonA buttonA;
Zumo32U4ButtonB buttonB;
Zumo32U4ButtonC buttonC;

void setup()
{
}

void loop()
{
  //vooruit rijden
  if (buttonA.isPressed()) //wanneer je button A inklikt
  {
    for (int speed = 0; speed <= 250; speed++) //door de loop versneld de motoren zich tot het aangegeven snelheid
    {
      motors.setLeftSpeed(speed); // hier mee zorg je dat de linker motor de setSpeed krijgt 

      motors.setRightSpeed(speed); // hier mee zorg je dat de rechter motor de setSpeed krijgt 

      delay(2); //2 ms delay krijgt die na elke loop, zorgt er voor dat die of rustig optrekt of rustig afremt 
    }
    for (int speed = 250; speed >= 0; speed--) //door de loop versneld de motoren zich tot het aangegeven snelheid
    {
      motors.setLeftSpeed(speed); // hier mee zorg je dat de linker motor de setSpeed krijgt 

      motors.setRightSpeed(speed); // hier mee zorg je dat de rechter motor de setSpeed krijgt 

      delay(2); //2 ms delay krijgt die na elke loop, zorgt er voor dat die of rustig optrekt of rustig afremt
    }
  }

  //achteruit rijden
  else if (buttonB.isPressed()) // wanneer je button B inklikt
  {
    for (int speed = 0; speed >= -250; speed--) // Door deze loop versnellen de motoren van 0 naar een speed value van 400. Waardoor de robot vooruit rijd
    {
      motors.setLeftSpeed(speed); // hier mee zorg je dat de linker motor de setSpeed krijgt 

      motors.setRightSpeed(speed); // hier mee zorg je dat de rechter motor de setSpeed krijgt 

      delay(2); //2 ms delay krijgt die na elke loop, zorgt er voor dat die of rustig optrekt of rustig afremt
    }
    for (int speed = -250; speed <= 0; speed++) //door de loop versneld de motoren zich tot het aangegeven snelheid
    {
      motors.setLeftSpeed(speed); // hier mee zorg je dat de linker motor de setSpeed krijgt 

      motors.setRightSpeed(speed); // hier mee zorg je dat de rechter motor de setSpeed krijgt 

      delay(2); //2 ms delay krijgt die na elke loop, zorgt er voor dat die of rustig optrekt of rustig afremt
    }
  }
  //draait om ze eigen as 
  else if (buttonC.isPressed())//wanneer je button c inklikt
  {
    motors.setSpeeds (250, -250);// dit zorgt er voor de de ene band met 250 gaat terwijl de andere met -250 gaat
    delay(500);//zorgt ervoor dat er een 500ms delay op zit 

    motors.setSpeeds (0,0);// dit zorgt er voor dat beide motors stoppen
    delay(500);//zorgt ervoor dat er een 500ms delay op zit
    
    
  
  }
}
