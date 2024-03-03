/*
 ilk 20 asal mersanne sayılarını veren örnek kodu yazınız.
 𝑀𝑒𝑟𝑠𝑎𝑛𝑛𝑒 𝑠𝑎𝑦𝚤𝑙𝑎𝑟𝚤 𝑓𝑜𝑟𝑚ü𝑙ü = 2^n− 1
 
 Kodlarımızı yazarken öncelikle, önceki örneklerimizde yaptığımız mersanne sayılarını ve asal sayıları bulan kodlarımızdan yardım alacağız. Diğer örnekten farklı olarak burada yapacağımız işlem mersanne sayıları arasından asal olanları belirleyerek ekrana ilk 20 tanesini bastırmak olacaktır.
 
 fonksiyonlar main fonksiyonunun dışında fonksiyon olarak yazılır ama her zaman ilk main fonksiyonu ilk çalışır , son çalışır main de başlar main de biter
 
 */

#include <iostream>
using namespace std;

int ust(int t,int u){//t^ü=t*t*t..*t
    int sonuc =  1;
    for(int i=1;i<=u;i++){
        sonuc = sonuc *t;
    }
    return sonuc;
}
bool asalmi(int x){
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int asal(int x){
    int c=0;
    double i;
    for( i=2;c<x;i++){// i döngüyü bitirmek için bikere daha artıyo
        if(asalmi(i)){
            c++;
        }
    }
    return i-1;//bulduğun i. değeri mainde döndürmek için
}



int main() {
        
    cout << asal(8) << endl;
    return 0;
}
