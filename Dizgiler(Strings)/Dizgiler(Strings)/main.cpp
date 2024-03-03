#include <iostream>

using namespace std;

int boyut(char *s){
    int b = 0;
    char c = s[0];
    while(c!='\0'){
        c = s[++b];
    }
    return b;
}

int main() {
    char *s = "yunus"; // immutable = değiştirilemez
    cout << s << endl;
    cout << s[2] << endl;
    char c[6] = "yunus"; //string dizisinde \0 koymamız gerektiği için altı elemanlı yaptık her zaman bir fazlası
    char a[5];
    a[0]='y'; //"y" -> y, \0
    a[1]='u';
    a[2]='n';
    cout << c << endl;
    cout << a << endl;
    //s=c; shallow copy , sığ kopyalama
    //strcmp -> string compare
    //sözlük karşılaştırması == 0 , -1 ,+1
    if(strcmp(c,s)==0){
        cout << "esitler" << endl;
        }
    else{
        cout << "esit degiller" << endl;
    }
    c[2]='x';
    cout << s << endl;
    cout << c << endl;
    //string olarak tanımlanan bir şeyi değiştiremeyiz ama karakter dizisi olarak tanımlanmış diziyi değiştirebiliriz
    cout << boyut(s) << endl;
    cout << boyut(c) << endl;
    cout << strlen(s) << endl; //strlen string in kaç karakter olduğuna bakar
    char *x=(char *)malloc(sizeof(char)*6);//end of stringide olcak , hafızasını ayırmamız lazım
    strcpy(x,s);// strcpy bir stringi diğer stringe kopyalar s in içeriğini x e kopyalar , deep copy
    cout << x << endl;
    
    return 0;
}
