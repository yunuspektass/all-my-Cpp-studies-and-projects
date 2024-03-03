#include <iostream>
using namespace std;

int main() {
    int a[2][3]={0,1,2,9,8,71};
    int b[2][3]={6,5,4,3,41,5};
    
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            a[i][j] += b[i][j];
            cout << " " << a[i][j];
            }
        cout << endl;
        }

    
    return 0;
}
