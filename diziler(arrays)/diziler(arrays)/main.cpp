/* dizi varsa köşeli parantez şart ,değişkenleri hafızada tutar

diziler aynı cins bilgileri ardışık olarak tutmaya yarar.
 
 random access 

 */


#include <iostream>
using namespace std;

int main() {
    int a[3]={5,6,2};
    cout << a[1] << endl;
    cout << a[2]+a[0] << endl;
    a[2]=8;
    
    for(int i=0;i<3;i++){
        cout << a[i] << endl;
        
        //i=0 cout << a[0] << endl;
        //i=1 cout << a[1] << endl;
        //i=2 cout << a[2] << endl;
    }
    int b[4];
    b[0]=10;
    b[1]=20;
    cin >> b[2];
    cin >> b[3];
    
    for(int i=0;i<4;i++){
        cout << b[i] << endl;
    }
    //kullanıcıdan 20 sayı okumak istesek dizinin içine okuyup saklayabiliriz ve kullanırız.
    return 0;
}
