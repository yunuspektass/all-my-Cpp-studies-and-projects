/*
 Sadece toplama işlemini kullanarak çarpma işlemi yapan örnek kodu yazınız. Örneğin; f(3,4) olan işlemin sonucunu 12 olarak bulmalısınız.
 Kodlarımızı yazmaya başlamadan önce hatırlamamız gereken ilk şey, her çarpma işleminde ilk sayının, ikinci sayı kadar kendi ile toplandığıdır. Yani biz 3*4 işlemini 3+3+3+3 şeklinde de yazabiliriz.
 Örneğimizi döngüler ile yazacak olsaydık, çarpım değerleri olması için iki tane değer alarak başlardık ve birinci sayıyı, ikinci sayı kadar toplamasını söylerdik. Örnek kodlarımız yandaki gibi olurdu.

 
 */

#include <iostream>
using namespace std;
// a*b=a+a+a+a+...+a b kadar toplama var
//f(a,b)=a+a+a+a+...+a b kadar toplama var
//f(a,b-1)=a+a+a+a+...+a b-1 kadar toplama var
//f(a,b)=a+f(a,b-1)
//
//f(a,0)=0
int carpimr(int a ,int b){//bitiş,adım,başlangıç recursive fonk.
   if(b==0||a==0)
       return 0;
   else if(b<0){
       return carpimr(0-a,0-b);//f(-5,3)=f(5,-3)//f(-5,-3)=f(5,3)
    }
    return a+carpimr(a, b-1);
    
}
//f(3,4)=3+f(3,3) =12
//f(3,3)=3+f(3,2) =9
//f(3,2)=3+f(3,1) =6
//f(3,1)=3+f(3,0) =3
//f(3,0)=0

int carpim(int a,int b){//3,4 itterativ fonksiyon döngüyle iki fonksiyonda birbirine dönüşebilir
    //0,3,6,,9,12
    int sonuc =0;
    for(int i=0;i<b;i++){// 4 kere döncek
        sonuc =sonuc + a;
    }
    return sonuc;
}
int main() {
    cout << carpimr(3, 4) << endl;
    cout << carpimr(2, 8) << endl;
    cout << carpimr(-8, 5) << endl;
    cout << carpimr(8, -5) << endl;
    return 0;
}
