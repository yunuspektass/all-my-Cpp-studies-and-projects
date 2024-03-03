/* İlk 20 Mersanne sayılarını veren kodu yazınız.
 𝑀𝑒𝑟𝑠𝑎𝑛𝑛𝑒 𝑠𝑎𝑦𝚤𝑙𝑎𝑟𝚤 𝑓𝑜𝑟𝑚ü𝑙ü = 2𝑛 − 1(2 üssü n olacak)
 Örneğin: 1, 3, 7, 15, 31, 63 ... şeklinde devam ederek gitmektedir.
*/

#include <iostream>
using namespace std;

int ust(int t, int u){//fonksiyonun içeriğini belirt int vs.
    //t^u=t*t*t*t....*t t sayısı u kadar
    int sonuc=1;
    for (int i=1; i<=u;i++){
        sonuc = sonuc * t;
    }
    return sonuc;// sonucu hesapladıktan sonra return etmemiz lazım çünkü ekrana basması gerekiyor her döngüden sonra
    //komudun geldiği yerden yani main fonksiyonuna return eder
    // her returnden sonra int sonuc 1 e döner yeni taban ve üste göre değer alır
}
 
int main() {
    //2^n
    for(int i=1;i<=20;i++){
        cout << ust(2,i)-1 << endl;
    }
    return 0;
}
