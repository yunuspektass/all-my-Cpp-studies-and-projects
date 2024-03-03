/* Kullanıcıdan 12 saatlik sistemde saati alıp (hh.mm.ssAM veya hh.mm.ssPM), bu saati 24 saatlik sisteme çeviren örnek kodu yazınız.
 PM öğleden sonraki saati belirtir. AM ise öğleden önceki saati belirtmek için kullanılır.
 Örneğin:
 Kullanıcıdan alınan saat: 07:05:02PM Çıktı: 19:05:02
 Kullanıcıdan alınan saat: 07:02:00AM Çıktı: 07:02:00
 
 abc << string
 a,b,c,\0 -->string bitti der. \0 end of string
 0,1,2,3
 o yüzden char dizisinin boyutunu bir fazla yazmak lazım
 
 tek tırnak karakteri temsil eder.
 */

#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
    baslangic:
    
    cout << "Lütfen 12'lik sistemde bir saat giriniz:";
    char s[11];
    cin >> s;
    if(s[8]=='P'){ //tek tırnak çünkü karakter ve karakter dizisi dizgi ise string çift tırnak içinde yazılır
        char x[3];
        x[0]=s[0];
        x[1]=s[1];
        x[2]='\0';
        
        int saat = atoi(x); // atoi = asci to integer , karakter değerini tamsayı yapan kod.
       /* int saat = 0;
        saat += (x[0]-48)*10;
        saat += x[1]-48; */
        saat += 12;
        
        s[0]=(char)48+saat/10; //  karaktere yazmak için karakter yapıyoruz
        s[1]=(char)48+saat%10;
        s[8]='\0';//tek tırnak karakteri temsil eder ve \0 end of string yani karakter dizisini sonlandırır.
    
        cout << "Yeni Saat:" << s << endl;
    }
    else {
        s[8]='\0';
        cout << s << endl;
    }
    
   goto baslangic;
    return 0;
}
