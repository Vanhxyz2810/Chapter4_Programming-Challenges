#include <iostream>
using namespace std;
int main()
{
    cout << "Hinh 1:" << endl;
    for (int i = 1; i <= 4; i++) // 1
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "+ ";
        }
        cout << endl;
    }

    cout << "Hinh 2: " << endl;
    for (int i = 4; i >= 1; i--)  // 2
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "+ ";
        }
        cout << endl;
    }
}