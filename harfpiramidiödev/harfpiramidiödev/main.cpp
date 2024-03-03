/* Kullanıcıdan A’dan Z’ye kadar bir harf girmesini isteyin ve girilen harfe kadar olan harfler ile bir piramit oluşturun. Piramit kullanıcıdan alınan harf ilke başlayacaktır ve o harfler kendini tekrar edecektir. Ekrana basılması istenen görüntü aşağıdaki gibidir:
 Kullanıcının A harfini girdiği baz alınmıştır.
 A
 ABA
 ABCBA
 ABCDCBA
 ABCDEDCBA
 ABCDEFEDCBA
 
 char c = 'A';// karakter olan A harfi
 int x= c; // A nın integer değerini verir A harfinin ASCII kodu her karakterin değeri var 65 desimal değerine sahip
 cout << c << endl;
 cout << x << endl;
 
 int n=79;
 cout << (char)n<< endl;//kullanıcıdan okuyacağımız değer sayıya karşılık gelecek
 
 char c;
 cout << "lutfen bir harf giriniz:"<< endl;
 cin >> c;
 cout << (int)c << endl;
 
 //HARFLERİ SAYIYA ÇEVİREBİLİRİM
 0.SATIR 0
 1.      010
 2.      01210
 3.      0123210 SATIR NUMARASINA KADAR MAKSİMUM DEĞER ALIYO
 SATIR NUMARASINA KADAR ARTIYO SONRA TEKRAR AZALIYO
 
 
 65
 656665
 6566676665
 
 */

#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  baslangic:
    char c;
    cout << "lutfen bir buyuk harf giriniz:";
    cin >> c;
    
    for(int i=c-65;i<26;i++){//satır numarasını i verir
        for(int j=c-65;j<=i;j++){
            cout << (char)(j+65);
        }
        for(int j=i-1;j>=c-65;j--){
            cout << (char)(j+65);
        }
        cout << endl;
    }
    
    goto baslangic;
    return 0;
}
