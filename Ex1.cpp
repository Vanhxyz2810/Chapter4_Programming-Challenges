//Author:Vanhxyz
#include <iostream>
using namespace std;
int main(){
    int all = 0;
    int a;
    cout << "Input a:";
    cin >> a;
    if (a < 0)
    {
        cout << "Khong dc la so am";
    }
    for (int i = 1; i <= a;i++)
    {
        all += i;

    }
    cout << all;
}
