/*
Author:
  USB Ninja | @CC0126
Description:
  This script is a clone from NinjaBLESetup.ino default example
  >> It need 6 seconds to configure itself <<
  !!!DO NOT TURN OFF THE POWER DURING OPERATION !!!
  
  https://www.usbninja.com/
  This Code to Setup the BLE Module.
  You can use SetBLE(String BLEName, String Password) function to configure it.
    - parameter 1 BLEName:
        The Device Name of the BLE Module. (Maximum character length is 16 bytes)
    - parameter 2 Password:
        The Connect Password of the BLE Module. (Supports only 4-bit pure numbers)
*/

void setup()  
{
  //Example:  SetBLE("Bluetoothspeaker","1234");
  SetBLE("Ninja","8888"); //Set the name to Ninja, Set the password to 8888.
}

void loop()
{
  //DO NOT WRITE CODE HERE
}

void payloadA()
{
  //DO NOT WRITE CODE HERE
}

void payloadB()
{
  //DO NOT WRITE CODE HERE
}
