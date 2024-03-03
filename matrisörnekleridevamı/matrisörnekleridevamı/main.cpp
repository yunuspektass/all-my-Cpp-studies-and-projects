/*
 Matris oluşumlarını daha iyi anlayabilmek için aynı örneği biraz değiştirerek, bu defa 1’lerin altında kalan tüm sayılarında 1 olduğu bir matrisi ekrana bastıralım.
Bunun için satır ve sütunları yine analiz ederek bir koşul oluşturmamız gerekirse, analizi aşağıdaki gibidir (4’lük bir köşegen ele alınarak yapılmıştır):
0 0 0 1 (i=0k=3)
0 0 1 1 (i=1 k=2) (i=1 k=3)
0 1 1 1 (i=2 k=1) (i=2 k=2) (i=2 k=3)  (i=3k=0)    i+k <=b-1
1 1 1 1 (i=3k=0)
 */
#include <iostream>
using namespace std;
int main() {
    
    int b;
    
    cout <<"matrisin boyutunu giriniz: " ;
    cin >> b;
    
    for(int i=0 ; i<b ; i++){
        
        for (int k=0 ; k<b ; k++){
            
            if(i+k <b-1){
                
                cout << "0" ;
            }
            
          
            else
             cout << "1";
            
            
        }
        
        cout << endl;
        
        
        
        
    }
    
    
    return 0;
}
