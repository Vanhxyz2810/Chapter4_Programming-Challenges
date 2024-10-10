#include <iostream>
using namespace std;
int main(){
    int s,t,v;
    cout << "Toc do cua xe la: ";
    cin >> v;
    cout << "Thoi gian di duoc la: ";
    cin >> t;
    
    cout << "Toc do cua xe la " << v << " tren 1h" << endl;
    cout << "Xe da di duoc " << t << "h" << endl;
    cout << "Khoang cach theo gio ma xe da di" << endl;
    cout << "-------------------------------------------" << endl;
    for (int i = 1; i <= t;i++)
    {
        s = v * i;
        cout << i <<"\t " << s << endl;
    }
    return 0;
}
