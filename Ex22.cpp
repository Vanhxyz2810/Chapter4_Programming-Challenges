#include <iostream>
using namespace std;
int main() {
    int input;
    cout << "Nhap mot so nguyen duong khong > 15: ";
    cin >> input;
    for (int i = 1;i <= input;i++){
        for (int j = 1;j<= input;j++){
            cout << "X ";
        }
        cout << endl;
    }
}