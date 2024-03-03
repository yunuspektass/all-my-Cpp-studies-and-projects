/*
 Kullanıcıdan iki sayı alarak kombinasyonunu ekrana bastıran fonksiyonu yazınız C(n,r)=n!/r!(n-r)!
 
 
 int faktoriyel(int x){//3!=3*2*1=6 int değer alıp int değer döner
     int carpim=1;//çarpımını biriktirmem lazım biriktirici tip , çarpımda etkisiz sayıdan başlarım
     for(int i=x; i>0;i--){
         carpim *= i;// i nin her döngü değerini çarparak ekliycem
         //carpim = carpim * i
     }
     return carpim;// hesapladığım değeri bana mainde döndürcek
 
 */

#include <iostream>
using namespace std;

int faktoriyel(int x){
    int carpim=1;
    for(int i=x; i>0;i--){
      carpim *= i;
    }
    return carpim;
    
}
int kombinasyon(int n , int r){//istediğimiz kadar parametre veririz
    return faktoriyel(n)/(faktoriyel(r)*faktoriyel(n-r));
    //returnde işlem yapabiliriz
}//fonksiyonları tanımlayıp kullanmak daha faydalıdır

int main() {
    
    cout << faktoriyel(3) << endl;
    cout << faktoriyel(6) << endl;
    cout << kombinasyon(5,2) << endl; // verilen sırayla parametre vermeliyiz
    
    return 0;
}
