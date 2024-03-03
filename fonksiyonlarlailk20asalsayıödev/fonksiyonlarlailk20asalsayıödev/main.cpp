/*
 ilk 20 asal sayıyı yazan örnek kodu yazınız.
 2,3,5,7,11,13
 97 asalmı? 2,3,4,5,6...96  tam bölerse asal değil, hiçbiri bölemezse o zaman asal
 
 fermat teoremine göre asallığı kontrol için sayının karaköküne olan sayıları test etmek yeterlidir
 kökü aşağı yukarı kök 10 sa birden ona kadar sayılara bakmakta yeterlidir
  
 */

#include <iostream>
using namespace std;

bool asalmi(int x){//bool true,false döner true=1,false=0
    for(int i=2;i<x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main() {
 /*   cout << asalmi(19)<< endl;
    cout << asalmi(38) << endl;
    cout << asalmi(60) << endl;
    cout << asalmi(97) << endl;*/
    
    int c=0;
for(int i=2;c<20;i++){//1000'e kadar gidip asalsa basan kod
if(asalmi(i)){ //if trueda çalışır , i true ise i'yi ekrana bas
        cout << i << endl;
    c++;
       }
    }
    return 0;
}
