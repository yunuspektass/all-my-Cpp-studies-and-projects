/* pointer=ramdeki adresi gösteren değişkendir.
 &(ampersand,ve işareti) = değişkene adres atar. değişkenin başına koyarsak adresini alır
 * = gösterdiği adreste hangi değer olduğunu gösterir. * koyarsak değişkene pointer olur. pointerın içine herhangi adres koyabilriz.
 
 
 ADRES     DEĞER
 
 FF808     a=10
 
 AH900    *p=FF808
 
 int a=10;
 int *p;
 p=&a;
 cout << *p; //10
 cout << p; //FF808
 cout << &p; // AH900
 cout << &a; // FF808
 cout << a; // 10
 */


#include <iostream>
using namespace std;
int main() {
    int a=10;
    int *p;//bir pointer oldu
    p = &a;
    cout << "a: " << a << endl;
    cout << "*p: " << *p << endl; // *p p in point ettiği yeri gösterir , gösterdiği yerdeki değeri bas
    cout << "&a: " << &a << endl;
    cout << "p: " << p << endl;
    cout << "&p: " << &p << endl;// &p p'in durduğu yerdeki adresi
    
    
    
    return 0;
}
