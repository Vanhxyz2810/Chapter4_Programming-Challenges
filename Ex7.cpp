#include <iostream>
using namespace std;
 int main(){
    int ngay;
    int tienluong = 1;
    double tongtienluong = 0;
    

    cout << "Nhap so ngay: ";
     cin >> ngay;
     if (ngay <= 0){
        cout << "Error input";
     }
     for (int i = 1;i < ngay;i++){
        tongtienluong += tienluong;
        cout << "Ngay " << i << ": " << tienluong << " xu" << endl;
        tienluong *= 2;
     }
     
     cout << "=====================" << endl;
     cout << "TOng tien luong la: " << tongtienluong / 100  << "$";
 }