#include <iostream>
using namespace std;
int main()
{
    int so_lg_student;
    string ten, ten_dau, ten_cuoi;
    cout << "Nhap so luong hoc sinh: ";
    cin >> so_lg_student;
    while (so_lg_student < 1 || so_lg_student > 25)
    {
        cout << "Loi dau vao. Vui long nhap lai" << endl;
        cout << "Nhap so luong hoc sinh: ";
        cin >> so_lg_student;
    }
    cin.ignore();
    for (int i = 1; i <= so_lg_student; i++)
    {
        cout << "Hoc sinh thu " << i << " co ten la: " << endl;
        getline(cin, ten);
        if (i == 1)
        {
            ten_cuoi = ten;
            ten_dau = ten;
        }
        else
        {
            if (ten < ten_dau)
            {
                ten_dau = ten;
            }
            else if (ten > ten_cuoi)
            {
                ten_cuoi = ten;
            }
        }
    }
    cout << "Hoc sinh o vi tri dau hang: " << ten_dau << endl;
    cout << "Hoc sinh o vi tri cuoi hang: " << ten_cuoi << endl;
}