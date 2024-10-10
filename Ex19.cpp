#include <iostream>
using namespace std;

int main()
{
    double tongchiphi = 0;
    double chiphi, so_tien_lap_ngan_sach_cho_1m;
    cout << "Nhap so tien da lap ngan sach cho 1 thang: ";
    cin >> so_tien_lap_ngan_sach_cho_1m;
    while (true)
    {
        cout << "Nhap chi phi, neu khong con chi phi nao nua vui long nhap ' 99 ' de thoat \n";
        cout << "Nhap chi phi: ";
        cin >> chiphi;
        if (chiphi == 99)
        {
            break;
        }
        tongchiphi += chiphi;
    }
    if (tongchiphi > so_tien_lap_ngan_sach_cho_1m)
    {
        cout << "Ban da vuot qua ngan sach la: " << tongchiphi - so_tien_lap_ngan_sach_cho_1m << endl;
    }
    else
    {
        cout << "Ban con du ngan sach la: " << so_tien_lap_ngan_sach_cho_1m - tongchiphi << endl;
    }
}