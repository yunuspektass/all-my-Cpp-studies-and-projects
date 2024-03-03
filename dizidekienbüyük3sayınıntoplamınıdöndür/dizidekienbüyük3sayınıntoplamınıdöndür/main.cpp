/* Verilen bir dizideki en büyük 3 sayının toplamını döndüren kodu yazınız. */

#include <iostream>
using namespace std;

int main() {
   
    int a[9]={2,7,20,8,9,1,6,8,15};//9+8+7=24
    //15,12,11,10
    int as1= a[0];
    int as2=a[1];
    int as3=a[2];
    for(int i=1;i<9;i++){
        if(as1<a[i]){
                   //eğerse as'yi günceller
            as3=as2;
            as2=as1;
            as1=a[i];
        }
        else if (as2<a[i]){
            as3=as2;
            as2=a[i];
        }
        else if (as3<a[i])
            as3=a[i];
    }
    cout << "en büyük 3 sayı:" << as1 << ","<< as2 << "," << as3 <<  endl;
    cout << "toplam:" << as1+as2+as3 << endl;
    
    
    
    
    
    
    return 0;
}
