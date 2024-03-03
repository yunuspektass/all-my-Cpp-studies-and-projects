#include <iostream>
using namespace std;
int main() {
    string s; //immutable değiştirilemez
    char *p = "yunus";
    char c[6]="yunus";
    s = p;
    cout << s.size() << endl;
    s.append(" deneme");
    cout << s << endl;
    cout << s.substr(2,8) << endl; //2-8 arasındaki karakterleri aldı
    return 0;
}
