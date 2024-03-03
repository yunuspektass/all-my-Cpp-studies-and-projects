/* iki satırda sayılar alın. ilk sayırdaki sayı , ikinci satırdaki sayıların sayısını veriyor olsun. İkinci satırdaki sayıların toplamını ekrana yazınız.
 Örnek:
 5
 1 2 7 8 2
 Sonuç:20
 
 3
 8 9 2
 Sonuç:19

 
 c++ da terminal de her boşluk yeni sayı olarak algılar
 */

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
   int toplam = 0;
    for(int i=0;i<n;i++){
       
        toplam += a[i];
    }
    cout << "toplam:" << toplam << endl;//dizilerde okumayla işlemi ayırmakta fayda var.
    return 0;
}
