#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    int so_random_1 = rand() % 51;
    int user_1;
    cout << endl;
    cout << so_random_1 << endl;

    while (true)
    {
        cout << "Nhap so: \n";
        cin >> user_1;
        if (user_1 < so_random_1)
        {
            cout << "Rat thap, hay thu lai! \n";
        }
        else if (user_1 > so_random_1)
        {
            cout << "Rat cao, hay thu lai! \n";
        }
        else
        {
            cout << "Chuc mung, ban da doan dung!";
            break;
        }
    }
}