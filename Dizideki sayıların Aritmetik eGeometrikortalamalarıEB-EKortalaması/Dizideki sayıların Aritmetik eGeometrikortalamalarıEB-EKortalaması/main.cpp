/* pow(5,3) 5'in 3'üncü kuvveti demek , pow(5,1/2) karekökünü verir vs. gibi kullanabiliriz int,float değerlerine dikkat edelim.
 
 pow(sayı,kuvveti)
 
 sqrt(25)// sqrt komutu kare alır
 
 sqrt(karesini istediğimiz sayı)
 
 */


#include <iostream>
#include <math.h>//matematiksel işlemler için kütüphane

using namespace std;


int main() {//2x4=8 sayıların goemetrik ort= 8 in karekökü
    //2x4x5=40 40 ın küp kökünü al
   
    int a[8]={5,7,2,22,9,1,4,3};
    int toplam=0;
    int carpim=1;
    int tektoplam=0;
    int ttsayisi=0;
    int eb=a[0] , ek=a[0];
    for(int i=0;i<8;i++){
        toplam += a[i];
        carpim *= a[i];
        if(a[i]%2==1){
            tektoplam += a[i];
            ttsayisi++;
        }
        if(a[i]%2==0){
            if(eb<a[i]){
                eb=a[i];
            }
            if(ek>a[i]){
                ek=a[i];
            }
        }
    }
    cout << "ortalama:" << (float)toplam/8 << endl;
    cout << "geometrik ortalama:" << pow(carpim,(float)1/8) << endl;
    cout << "tek sayıların ortalaması:" << (float)tektoplam/ttsayisi << endl;
    cout << "en büyük çift sayı ile en küçük çift sayının ortalaması:" << (float)(eb+ek)/2 << endl;
    
    return 0;
}
