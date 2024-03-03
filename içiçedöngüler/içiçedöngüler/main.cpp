#include <iostream>
using namespace std;

int main() {
    
    cout << "boyutu giriniz" << endl;
    int boyut;
    cin >> boyut;
    
    for(int i=1; i<=boyut ; i++){ //4x4 lük bi çarpım tablosu
        
        for( int k=1 ; k<i ; k++){
            
            cout << " " ;
            
        }
        
        for(int j=1; j<=boyut-i+1 ; j++){
            
            cout << "*" ;
            
            
        }
        cout << endl;
        
    }
        
    
     
    
    
    return 0;
}
