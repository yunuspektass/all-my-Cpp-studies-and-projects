/*
 Verilen bit metin dosyasındaki bütün karakterleri tersine çeviren kodu yazınız.
 string =dizgi = karakter
 */
#include <iostream>
#include <fstream> //dosya akışı kütüphanesi
using namespace std;
string ters(string s){
    char c = s[0];
    int i= 1;
    char *p,*q;
    //yunus
    //q   p
    p = &s[0];
    q = &s[0];
    while (*p!='\0') {
        
        p++;
    }
    p--;
    while (p>q) {
        char c = *p;
        *p = *q;
        *q = c;
        p--;
        q++;
    }
    return s;
}
int main() {
    ifstream girdi("girdi.txt");//dosya okuma
    string s;
    ofstream cikti("cikti.txt"); //dosya yazma
    while (getline(girdi,s)) {
      
        cout << ters(s) << endl;
        cikti << ters(s) << endl;
    }
    girdi.close();
    cikti.close();
    return 0;
}
