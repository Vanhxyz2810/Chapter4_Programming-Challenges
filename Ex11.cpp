#include <iostream>
using namespace std;
int main()
{
    double so_luong_sv_ban_dau;
    double muc_tang_trung_binh;
    double so_ngay_nhan_len;
    cout << "So luong sinh vat ban dau: ";
    cin >> so_luong_sv_ban_dau;
    while (so_luong_sv_ban_dau < 2)
    {
        cout << "Khong chap nhan so < 2, vui long nhap lai" << endl;
        cout << "So luong sinh vat ban dau: ";
        cin >> so_luong_sv_ban_dau;
    }
    cout << "Muc tang trung binh hang ngay cua quan the: ";
    cin >> muc_tang_trung_binh;
    while (muc_tang_trung_binh < 0)
    {
        cout << "Khong chap nhan so < 0, vui long nhap lai" << endl;
        cout << "Muc tang trung binh hang ngay cua quan the: ";
        cin >> muc_tang_trung_binh;
    }
    cout << "So ngay chung se nhan len: ";
    cin >> so_ngay_nhan_len;
    while (so_ngay_nhan_len < 1)
    {
        cout << "Khong chap nhan so < 1, vui long nhap lai" << endl;
        cout << "So ngay chung se nhan len: ";
        cin >> so_ngay_nhan_len;
    }
    cout << "Ngay \t So luong sinh vat" << endl;
    cout << "==========================" << endl;
    for (int i = 1; i <= so_ngay_nhan_len; i++)
    {
        cout << i << "\t \t" << so_luong_sv_ban_dau << endl;
        so_luong_sv_ban_dau+=so_luong_sv_ban_dau * (muc_tang_trung_binh / 100);
    }
}