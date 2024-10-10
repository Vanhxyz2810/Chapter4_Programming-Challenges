#include <iostream>
using namespace std;

int main()
{
    int nam;
    int luongmua;
    int tong_so_thang;
    int tong_luong_mua;

    cout << "So nam: ";
    cin >> nam;
    while (nam < 1)
    {
        cout << "So nam ko dc nho hon 1, vui long nhap lai:";
        cout << "So nam: ";
        cin >> nam;
    }

    for (int i = 1; i <= nam; i++)
    {
        cout << "Nam " << i << ":" << endl;
        cout << "=======================================" << endl;

        for (int j = 1; j <= 12; j++)
        {
            cout << "Luong mua thang " << j << " la: ";
            cin >> luongmua;
            while (luongmua < 0)
            {
                cout << "Luong mua ko dc am, vui long nhap lai: ";
                cin >> luongmua;
            }
            cout << "=======================================" << endl;
            tong_so_thang = i * 12;
            tong_luong_mua += luongmua;
        }
    }
    cout << "Tong so thang la: " << tong_so_thang << endl;
    cout << "Tong luong mua la: " << tong_luong_mua << endl;
    cout << "Luong mua trung binh moi thang la: " << double(tong_luong_mua) / double(tong_so_thang);
}