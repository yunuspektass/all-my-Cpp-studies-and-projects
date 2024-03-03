/* iki diziyi karşılaştırarak, birinci dizinin, ikinci dizinin bir parçası olup olmadığını bulan örnek kodu yazınız */

#include <iostream>
using  namespace std;

int main() {
    int a[4] = {1,2,3,77};
    int b[11] = {1,2,3,77,3,6,7,1,2,3,77};
    //b : 2. 3. 4.
    //a : 0. 1. 2.
    int aboyut = 4;
    int bboyut = 11;
    for(int i=0;i<bboyut;i++){
        bool esit = true;
        for(int j=0;j<aboyut;j++){
            if(a[j]!=b[i+j]){
                esit = false;
                break;
            }
        }
        if(esit){
        cout << "alt elemanı vardır ve " << i << "'den başlar" << endl;
        }
          
    }
    
    
    
    return 0;
}
