#include <iostream>

using  namespace std;

int main() {
    
    int x[3] = {1,2,3};
    int *q;// pointer olarak tanımladık q'yu x'e eşitledik her elemana erişir.
    
   // q = &x[0]; p=x; ile de pointerı eşitlerim
    q = x;
    cout << q[2] << endl;
    
    q[2] =8;// istersem q ya da x den değiştiririm fark etmez. Gösterici pointer üzerinden değiştirebilirim. Hafızada bir yeri olduğu için her yerden değişir
    cout << x[2] << endl;
    
    int *qq;
    qq=x;
    // qq[2] = q[2] = x[2]
    
    int a = 10;
    int *p;
    p = &a;
    cout << a << endl;
    cout << *p << endl;
    
    *p = 46;
    
    cout << a << endl;
    cout << *p << endl;
    
    
    
    return 0;
}
