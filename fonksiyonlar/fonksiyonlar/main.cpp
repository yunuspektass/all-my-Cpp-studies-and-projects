

#include <iostream>
using namespace std;

//herhangi fonksiyon istediğimiz değer döndürür döndürme tipi ofnksiyon olarak  yazılır döndürmeyecekse void fonksiyonu kullanılır

int f (int x){
    cout << x << endl;
    return x+5; // değer döndürür , returne verdiğimiz sayı çağırlıdığı yeri döndürür
}

void g(int x){
    cout << x+5 << endl;
   //void de return kullanmak hata olur döndürme değerimiz void
}//herhangi bir değer döndürmez boş değer döndürür

int main() {// int main bir  fonksiyondur
    //öncelikli çalışan fonksiyonumuz maindir.
    //diğer fonksiyonları atlar c++ mainin içindekilerine çalıştırır
    cout << f(5) << endl;
    cout << f(19) << endl; // fonksiyonun içine yollar basar
    //sonra fonksiyonun return değerini burda basar
    g(10);
    
    return 0;
    
}
