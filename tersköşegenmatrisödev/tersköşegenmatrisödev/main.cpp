//Ters köşegeni (anti diagon) 1 olan ve diğer bütün elemanları 0 olan matrisi ekrana bastırınız.
//0001 i=0 j=3 , b=4 i+J=b-1 (b = boyut)
//0010 i=1 j=2
//0100 i=2 j=1
//1000 i=3 j=0e


#include <iostream>

using namespace std;

int main() {
   
     int b;
    
    cout << "boyutu giriniz" << endl;
    cin >>b;
    
    for ( int i=0; i<b ; i++){
        
        for(int j=0 ; j<b; j++) {
            
            if(i+j==b-1)
                cout << "1";
            else
            cout << "0" ;
            
        }
        
        cout << endl;
        
        
        
    }
    
    return 0;
}
