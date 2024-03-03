// RANDOM NUMBER GENERATOR
//seed , etmek tohumlama;besleme demek rastgele sayı üretirken ne kullanacağımızı söylüyoruz
//
#include <iostream>
using namespace std;

int main() {
    
    int rg;
    srand (time(NULL));
    //random fonksiyonunu zaman fonksiyonuyla besliyoruz
    //rastgele sayı üretirken rastgele zamanı kullanıyoruz
    //bilgisayarın kendi saatini kullanıyor
    rg=rand()%6+1;//1-6 arasında bir sayı döndürür ,örnek:zar
    cout << rg << endl;
    rg=rand()%2;//0 ile 1 gelir, 0->tura 1-> yazı
    cout << rg << endl;
    rg=rand()%100;//0 ile 100 arasında bir sayıdır
    //6'ya bölümünden kalanı verir 0-5 arasında değer döndürür
    cout << rg << endl;
    // bunu rastgele   srand (time(NULL)); zaman fonksiyonuyla yapıyoruz
    
    return 0;
}
