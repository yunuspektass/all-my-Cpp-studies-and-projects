/*
 Kullanıcıdan alınan sayı kadar boyuta sahip bir dik üçgeni ve ters dik üçgeni ekrana bastıran örnek kodu yazınız.
          
 i=0 *bbbb 0 --> i değerleri  b=boşluk
     **bbb 1
     ***bb 2
     ****b 3
     ***** 4
 
     * 1 yıldız + 4 boşluk =boyut
    ** 2 yıldız 3 boşluk
   *** 3 yıldız 2 boşluk
  **** 4 yıldız 1 boşluk
 ***** 5 yıldız 0 boşluk
 
 */

#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
   
    baslangic:
    
    int secim;
    cout<< "Yildizlarla dik ucgen icin 1'e ters dik ucgen icin 2'ye basiniz:";
    cin >> secim;
    
    if(secim==1 || secim==2){
        
        int b;
        cout <<" ?x? Ucgenizin boyutunu belirleyiniz:" ;
        cin >> b;
        
        if(secim==1){
            for(int i=0 ;i<b;i++){
                for(int j=0 ;j<i+1;j++){
                    cout << "*";
                    }
                cout << endl;            }
        }
        else if (secim==2){
            for(int s=0;s<b;s++){
                for(int k=0;k<b-(s+1);k++){//boşluklar
                    cout << " ";
                }
                for(int l=0 ;l<s+1;l++){
                    cout << "*";
                }
                cout << endl;
            }
        }
    }
    else{
        cout << "lutfen gecerli bir deger giriniz \nislem sonlandırıldı  " ;
        cout << endl;
        goto baslangic;
    }
    return 0;
}
