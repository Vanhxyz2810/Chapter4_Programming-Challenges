// tạo 2 số ngẫu nhiên
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    srand(time(0));
    int a = rand() % 100 + 1;
    int b = rand() % 100 + 1;
    int chon;
    do{
    cout << "So thu nhat la: a = " << a << endl;
    cout << "So thu hai la: a = " << b << endl; 
    cout << "-----------------------------------" << endl; 
    cout << "1. phep +" << endl;
    cout << "2. phep -" << endl;
    cout << "3. phep *" << endl;
    cout << "4. phep /" << endl;
    cout << "5. thoat" << endl;
    cout << "chon phep tinh: ";
    cin >> chon;
    switch (chon) {
        case 1:
            cout << a << " + " << b << " = " << a+b;
            break;
        case 2:
            cout << a << " - " << b << " = " << a-b;
            break;
        case 3:
            cout << a << " * " << b << " = " << a*b;
            break;
        case 4:
            cout << a << " / " << b << " = " << a/b;
            break;

        case 5:
            exit(chon);
        default:
            cout << "Lua chon khonhg hop le" << endl;
            cout << "*************************************" << endl;
            break;
    }
    } while (true);
    return 0;
}   
