#include <iostream>
using namespace std;

int main() {
    int a[2][2]={{1,2},{3,4}};
   // cout << a[0][1] << endl;
    
    for (int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout << a[i][j] << " ";
            
        }
        cout << endl;
    }
    int b[3][2];
    b[0][0]=75;
    cin >> b[0][1];
    b[1][0]=33;
    
    int c[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            c[i][j]= i+j;
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << c[i][j] << " " ;
        }
        cout << endl;
    }
    return 0;
}
