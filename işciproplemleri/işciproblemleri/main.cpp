#include <math.h>
#include <iostream>
using namespace std;

int main() {
    
    int a,b,c;
    cout << "dik ucgenin kenarlarini giriniz"<< endl;
    cin >> a;
    cin >> b;
    cin >> c;
    
    if(a*a+b*b == c*c || a*a+c*c == b*b || c*c+b*b == a*a ){
        
        cout << "dik ucgendir" << endl;

    }
    
    else {
        
        cout << "dik ücgen degildir" << endl;
        
    }

    
    return 0;
}
