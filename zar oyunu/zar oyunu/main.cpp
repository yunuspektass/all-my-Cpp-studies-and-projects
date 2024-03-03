/*
 İki kişinin zar oyunu oynadığını düşününüz. Kullanıcıdan kaçar zar atılacağını alıp, iki kişi için bu zarları atan, sonra da kazananı bulan örnek kodu yazınız.
 Yapılacak olan zar atma işleminde kullanılacak kodlar, daha önce de random (rastgele) sayı atma işleminde kullanılmış olanlardır. (rand() %6+1)
 Örneğin;
 Kullanıcıdan alınan sayı= 5
 1. Kullanıcı için= 1 6 3 2 4
 2. Kullanıcı için= 2 4 3 2 1
 Sonuç = 1 kullanıcı kazanır.
 */

#include <iostream>
using namespace std;

int main() {
    cout << "kaç zar atmak istersiniz?:" ;
    int n;
    cin >> n; // kaç zar atılacağı
   srand(time_t(NULL));
    int skor = 0;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        int z1 = rand()%6+1;
        int z2 = rand()%6+1;
        a[i]=z1;
        b[i]=z2;
        
        if(z1>z2){
            skor++;
        }
        else if (z2>z1){
            skor--;
        }
    }
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;//süslü parantez koymazsak 1 altındaki blok içinde kabul edilir. endl dışında kalır
    for(int i=0;i<n;i++)
        cout << b[i] << " ";
    cout << endl;
    
        if(skor>0)
            cout << "1. kullanıcı kazandı" << endl;
        else if(skor<0)
            cout << "2. kullanıcı kazandı" << endl;
        else
            cout << "berabere bitmiştir" << endl;
    
    return 0;
}
