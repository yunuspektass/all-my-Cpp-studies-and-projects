/* Kullanıcıdan 5 sayı alın. Bu sayılardan 4 tanesi ile üretilebilecek en büyük ve en küçük değerleri ekrana bastırınız.
 
 1 6 3 2 4
 Maks:15
 Min:10
 
 2 6 1 8 3
 Maks:19
 Min:12
 
 1 6 3 2 4 =16 direkt toplama
 maks sayı = 6
 min sayı = 1
 maks 16-1=15
 min 16-6=10
 
 
 */




#include <iostream>
using  namespace std;


int main() {
    int a[5];
    cout << "lütfen 5 sayı giriniz:" ;
    
    for(int i=0;i<5;i++){
        cin >>a[i];
    }
    int eb = a[0];
    int ek = a[0];
    int toplam =a[0];
    for(int i=1;i<5;i++){
        toplam += a[i];
        if(eb<a[i])
            eb = a[i];
        if(ek>a[i]){
            ek = a[i];
        }
        
    }
    cout << "maks:" << toplam-ek << endl;
    cout << "min:"  << toplam-eb << endl;
    
    return 0;
}
