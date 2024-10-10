#include <iostream>
using namespace std;
int main(){
    int tang;
    int phong;
    int so_phong_use;
    int tong_so_phong;
    int tong_so_phong_use;
    double ti_le;
    cout << "Khach san co bao nhieu tang: ";
    cin >> tang;
    for (int i = 1;i <= tang;i++){
        if (i == 13) {
            cout << "Tang 13 co ma nen thoi kk" << endl;
            continue;
        }
        cout << "Tang " << i << ":" << endl;
        cout << "Tang " << i << " co bao nhieu phong: ";
        cin >> phong;
        while (phong < 10) {
            cout << "So phong k dc < 10, vui long nhap lai" << endl;
            cout << "Tang " << i << " co bao nhieu phong: ";
            cin >> phong;
        }
        tong_so_phong += phong;
        tong_so_phong_use += phong;
        cout << "Co bao nhieu phong duoc su dung trong tat ca " << phong << " phong: ";
        cin >> so_phong_use;

    }
    ti_le = double(phong) / double(tong_so_phong);
    cout << "====================" << endl;
    cout << "ti le so phong dc su dung la: " << ti_le * 100 << " %";
}