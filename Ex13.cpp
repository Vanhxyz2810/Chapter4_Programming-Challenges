#include <iostream>
using namespace std;
int main() {
    int number;
    int max_number = -999999;
    int min_number = 999999;
    cout << "Nhap cac so (nhap -99 de end): " << endl;
    while (true)
    {
        cin >> number;
        if (number == -99) {
            break;
        }

        if (number > max_number) {
            max_number = number;
        }
        if (number < min_number) {
            min_number = number;
        }
    }
cout << "So max: " << max_number << endl;
cout << "So min: " << min_number << endl;
}