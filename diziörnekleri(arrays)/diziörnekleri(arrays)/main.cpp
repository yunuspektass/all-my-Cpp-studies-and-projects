/* Kullanıcıdan 5 sayı okuyarak bu sayılar içim aşağıdakileri ekrana yazan kodu yazınız.
 
 en büyük sayı , en küçük sayı , ortalama , toplam
 
 dizilerin sıralaması sıfırdan başlar
 
 */

#include <iostream>
using namespace std;
int main() {
    
    cout << "5 sayi giriniz:";
    int a[5];
    for(int i=0;i<5;i++){
        cin >> a[i];//a'nın sıfırıncı değerinden başlayarak girecez
    }
    //en büyük
    int eb = a[0];
    for(int i=1;i<5;i++){
        if(a[i]>eb){
            eb =a[i];
        }
    }
    cout << "en buyuk:" << eb << endl;
    //15,26,66,33,22
    // eb=66
    
    int ek = a[0];
    for(int i=1;i<5;i++){
        if(a[i]<ek){
            ek =a[i];
        }
    }
    cout << "en kucuk:" << ek << endl;
    //int toplamı dışarıda verdim çünkü döngü döndükçe sıfırlanmasın
    int toplam=0;
    for(int i=0;i<5;i++){
        toplam += a[i]; // a'nın i. elamanını toplama ekle demek
    }
    cout << "toplam:" << toplam  << endl;
    cout << "ortalama:" << (float)toplam/5 << endl;
    
    return 0;
}
