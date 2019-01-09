/*

Author:
  KING SABRI | @KINGSABRI

Description:

  This script is just a reuse and refinement for BLERemoteKeyboard.ino default example

  payloadA() {}
    Once you press button A, the following happens:
    - Press 'Win+R' to open run window
    - Write 'notepad' to open notepad
    - Write a string in opned notepad

  payloadB() {}
    Once you press button B, the following happens:
    - Write a string in the opned notepad
    - If you keep pressing, the same string will be appended repeatedly.
*/

#include <NinjaKeyboard.h>

void setup() {}
void loop() {}

void payloadA()
{

    USBninjaOnline();                                   //USBNinja appears. The cable's data line was temporarily cut off.

	NinjaKeyboard.begin();                              //Initliaze NinjaKeyboard USB Interface.
    NinjaKeyboard.delay(1000);                          //Delay 1 sec to compatibility Win7, Note: Some systems require 5 sec of preparation time.

    NinjaKeyboard.sendKeyStroke(0);                     //Send HID '0' to compatibility Win7.
    NinjaKeyboard.delay(1000);                          //Delay 1 second to wait system to recognize the NinjaKeyboard.

    NinjaKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);   //Press two keys at the same time, "R" key and "win logo" to call out the run window..
    NinjaKeyboard.delay(100);                           //Delay 100mS.
    NinjaKeyboard.print(F("notepad"));                  //Open a notepad.
    NinjaKeyboard.delay(100);
    NinjaKeyboard.sendKeyStroke(KEY_ENTER);
    NinjaKeyboard.delay(500);

    NinjaKeyboard.println(F("Hello there!\nThis is just a PoC of a working attack using USB Ninja. So,  in the next time, it wont be a notepad ;)"));
	NinjaKeyboard.delay(100);                           //Delay 100 millisecond, to wait the input finished.

  	NinjaKeyboard.end();                                //Send Disconnect command to NinjaKeyboard USB Interface
    USBninjaOffline();                                  //USBNinja disappear. Cable Line back to normal.

  	NinjaKeyboard.begin();                              //Restart Keyboard Interface while USB DATA
                                                        //was cut off. So you can use payloadB without ReEmulate NinjaKeyboard.
}

void payloadB()
{
    USBninjaOnline();                                   // USBNinja appears. The cable's data line was temporarily cut off.
    NinjaKeyboard.sendKeyStroke(0);                     //Send HID '0' to compatibility Win7.
    NinjaKeyboard.println(F("\n\nThank you!\n@KINGSABRI"));
}
