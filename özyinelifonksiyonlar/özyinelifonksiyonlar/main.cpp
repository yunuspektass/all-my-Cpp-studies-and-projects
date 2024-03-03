/*
 
 ÖZYİNELİ FONKSİYONLAR(RECURSİVE FUNCTİONS) döngüyle yazılabilir

n!= n*(n-1)*(n-2)...1 n!=1*2*3..n n!=n*(n-1)! 6!=6*5!

2*4=2+(2*3) 2*4=2+2+2+2    CALL BACK STACK(GERİ ÇAĞIRMA YIĞINI)
carp(2,4)=2+6                3!=3*2! 2!=2*1! 1!=1
carp(2,3)=2+4
carp(2,2)=2+2              Iterative=döngüyle yazılmasına denir
carp(2,1)=2+0                örneği bi önceki örneklerde var
carp(x,0)=0                    bilgisayarın anlayışına daha yakın
 
 Bu fonksiyon çeşitleri fonksiyon içinde kendi tanımından fonksiyon  bulunmasıdır. ilk bittiği durumla başlanır
 sonra adım değeri gelir
 
 
 faktoriyel(5)=5*faktoriyel(4)
 faktoriyel(4)=4*faktoriyel(3)
 faktoriyel(3)=3*faktoriyel(2)
 faktoriyel(2)=2*faktoriyel(1)
 faktoriyel(1)=1
       |
 faktoriyel(5)=5*24
 faktoriyel(4)=4*6
 faktoriyel(3)=3*2
 faktoriyel(2)=2*1
 faktoriyel(1)=1
 
 çağrıldığı yere sonucunu yazar fonksiyon

 return 1; çağırlıdığı değeri return(geri dönüş) eder
 
 
 bütün iterative fonksiyonlar recursive yazılabilir
 bütün recursive fonksiyonlar iterative yazılabilir
 
 */

#include <iostream>
using namespace std;
//recursive tarzı ,insanın anlayışına daha yakın
int faktöriyel(int n){
    if (n==1)
        return 1;//return fonksiyonun çalışmasını bitirir
    //çağrıldığı yeri return eder
    return n*faktöriyel(n-1);
    
}
int main() {
    
    cout << faktöriyel(5) << endl;


    return 0;
}
