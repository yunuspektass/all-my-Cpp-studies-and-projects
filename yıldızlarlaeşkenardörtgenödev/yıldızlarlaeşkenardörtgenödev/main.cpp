/*
 Kullanıcıdan alınan sayıya göre yıldızlardan oluşan eşkenar dörtgen bastırınız.
 
 
 n=5      n=2b+y  b=(n-y)/2
 satıra göre yıldız sayısı formül= 2i+1
yarısından sonrası= 2(n-i-1)+1
   * 2b 1    1  0.satır
  *** 1b 3y  2 1.s
 ***** 0b 5y 3  2.s
  *** 1b 3y  4  3.s
   * 2b 1y   5  4.s
 
 ÇİFT SAYI KURGUSU:
 	
  *
 ***
 ***
  *
 
  
  *
 ***
*****
*****
 ***
  *
 
 */

#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
baslangic:
    int n;
cout << "ıstedıgınız eskenar dortgenın degerını gırınız:";
cin >>n;
    
    for(int i=0;i<n;i++){
        int y,b;
        if(i<n/2){
            y=2*i+1;
        }
        else if(i==n)
            y=2*(i-1)+1;
        else {
            y=2*(n-i-1)+1;
        }
        b=(n-y)/2;
        for(int j=0;j<b;j++){//boşluklar
            cout << " ";
        }
        for(int j=0;j<y;j++){//yıldızlar
            cout << "*";
        }
        cout << endl;
    }
    goto baslangic;
    return 0;
}
