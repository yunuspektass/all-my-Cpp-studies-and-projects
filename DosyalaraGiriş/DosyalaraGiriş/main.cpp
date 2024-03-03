#include <iostream>
#include <fstream>//file stream dosya akışı kütüphanesi
using namespace std;


int main()
{
   //dosyayı yazma kismi
   ofstream dosya;
   dosya.open ("deneme.txt");
   
   if(dosya.is_open()){ //dosyanın açılabilirliğini kontrol ediyor.
       dosya << "yazilim /n";
       dosya.close();
       }
       else {
           
           cout << "dosya acilmiyor" << endl;
           }
           
    //dosyayı okuma kısmı
    string satir;
    
    ifstream dosya2 ("deneme.txt");
    if (dosya2.is_open()) {
        
        while (getline(dosya2, satir)) { //fstream kaynaklı bir koddur.
            
            cout << satir << endl;
            }
        dosya2.close();
        }
    return 0;
}
