/*
 iki boyutlu bir matrisin transpozunu alan örnek kodlarını yazınız.
 
 Transpoz: Matematikte (özellikle sayısal cebirde) bir matrisin satır ve sütunlarını yer değiştirmesi anlamına gelmektedir.

 Matris:
 
3 4 2                  3 5 4
5 6 7  -->Transpozu    4 6 2
4 2 1                  2 7 1
 */

#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {5,4,3,4,0,4,7,10,3}; // row satır bazlı
    // bastırılarak içeriği gösteriliyor
    for(int i=0; i<3;i++){
        for (int j=0;j<3;j++){
            cout << " " << a[i][j];
        }
        cout << endl;
    }
    //int b[3][3];
    // transpoz alma burada yapılıyor
    for(int i=0; i<3;i++){
        for (int j=i+1;j<3;j++){
            int g=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]= g;
            //swap (takaslama)
        }
    }
    // bu sefer transpoz bastırılıyor
    for(int i=0; i<3;i++){
        for (int j=0;j<3;j++){
            cout << " " << a[i][j];
        }
        cout << endl;
    }
   
    return 0;
}
