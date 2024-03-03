/*
 Kullanıcıdan alınan bir kelimenin palindrome olup olmadığını ekrana yazdıran örnek kodu yazınız.
 Bir kelimenin okunuşu ile tersten okunuşu aynı ise bu kelimeye palindrome adı verilmektedir.
 
 aabbcccdd
 çıktı: palindrom değildir
 aabbaa
 çıktı: palindrom (çift)
 abcba
 çıktı: palindrom (tek)
 
 anastasmumsatsana\0
   p               q
 
 */


#include <iostream>
using namespace std;
int main() {
    cout << "Lütfen bir kelime giriniz:";
    char c[100];//yazı olacağı için değişkeni karakter giriyoruz pointer malloclada yapabiliriz. dizgiler bir pointerdır
    cin >> c;
    char *p,*q;
    p = c; // dizginin en başını gösterir. c en baştan başlar
    q = c;
    while (*q!='\0') {//karakterleri tek tırnak içinde gösteriyoruz.*q olması lazım yani gösterdiği yeri ifade eder. q değeri ifade eder
        q++; // dizgi sonu \0 end of string var
    }
    q--; // dizginin son elemanı
    bool palindrome = true;
    while(q>p){//* gösterdiği yerdeki değer demek
        if(*p!=*q){
            palindrome = false;
        }
        p++;
        q--;
    }
    if(palindrome)
        cout << "Girilen dizgi bir palindromedur." << endl;
    else
        cout << "Girilen dizgi bir palindrome değildir." << endl;
    
    return 0;
}
