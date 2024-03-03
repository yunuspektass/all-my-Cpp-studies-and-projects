/* Bir oyuna göre , verilen bir dizgideki ardışık eşlerin silinmesine izin verilmektedir. Buna göre başlangıçta verilen bir dizginin alabileceği en kısa hali bulan kodu yazınız.
 
 aabcccdd
 Çıktı: bc
 
 aabcc          f(aabcccdd) -> f(bcccdd) -> f(bcdd) -> bc
 Çıktı:b
 
 abccba
 Çıktı:Boş Küme

 \0 end of string stringi bitirir.
 
 counter = sayaç olarrak kullanılan program değişkeni
 
 adbccdd\0
 s
 adbdd\0d\0
 s
 adbccdd\0
 adbcbdd\0
 adadbdd\0
   s
 
 anpersand ile yeni adresini atıyoruz.s[2] ve sonraki karakterleri almış oldu anpersand koymasaydık o noktadaki değeri işaret edecekti sadece
 */

#include <iostream>
#include <stdio.h>
using namespace std;
char *f(char *s){
    int i=0;
    char c = s[i];
    if(c=='\0'){
        return s;
    }
    bool kontrol = false;
    while(c!='\0'){
        char c1 = s[i+1];
        if(c==c1 && i==0){
            s =&s[i+2];
            kontrol = true;
        }
        else if(c==c1){
            kontrol = true;
            while(s[i]!='\0'){
                s[i] = s[i+2];
                i++;
            }
            s[i] ='\0';
        }
        i++;
        c = s[i];
    }
    if(kontrol == false)
        return s;
    else
    return f(s);
}
int main() {
    baslangic:
    cout << "Lütfen bir dizgi giriniz:" ;
    char c[100];
    cin >> c;
    cout << "Sonuç:" << f(c) << endl;
    goto baslangic;
    return 0;
}
