// Visual Micro is in vMicro>General>Tutorial Mode
// 
/*
    Name:       MyVisualMicroTest.ino
    Created:	5/14/2020 11:04:56 PM
    Author:     DESKTOP-UMBRMNM\RCrafters
*/

// Define User Types below here or use a .h file
//


// Define Function Prototypes that use User Types below here or use a .h file
//


// Define Functions below here or use other .ino or cpp files
//
#define LED 3

int x = 0;
// The setup() function runs once each time the micro-controller starts
void setup()
{
    Serial.begin(9600);
    Serial.println("Hello Visual Studio Micro World!!!");
    pinMode(LED, OUTPUT);
    digitalWrite(LED, LOW);

}

// Add the main program code into the continuous loop() function
void loop()
{
    digitalWrite(LED, LOW);
    delay(2000);
    Serial.print("x = ");
    Serial.println(x);
    digitalWrite(LED, HIGH);
    delay(2000);
    x++;
    if (x > 5) {
        x = 0;
    }
      

}
