#include <iostream>
using namespace std;

int f(int *a,int boyut){//dizi için pointer tanımla ramdeki yeri için , ve şu seviyede dizinin boyutunu belirtmelisin , kaç elemanlı olduğu = boyut
    int eb =a[0];
    int ek =a[0];
    for(int i=0;i<boyut;i++){
        if(a[i]>eb){//else yok ayrı ayrı kontrol ediyyoruz
            eb = a[i];
        }
        if(ek>a[i]){
            ek =a[i];
        }
    }
    cout << eb << endl << ek << endl;
    return eb-ek;
}


int main() {

    int a[9] = {4,5,6,2,1,5,6,7,-2};
    cout << f(a,9)<< endl;
    
    return 0;
}
