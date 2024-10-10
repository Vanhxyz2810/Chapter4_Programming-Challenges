#include <iostream>
using namespace std;
int main()
{
    double lai_suat_hang_nam;
    double so_du_ban_dau;
    double so_tien_gui_vao_tai_khoan_trong_thang, so_tien_rut_tu_tai_khoan_trong_thang;
    double tong_so_tien_gui_vao_tai_khoan = 0;
    double tong_so_tien_rut = 0;
    double tong_tien_lai1 = 0;
    int so_thang_da_troi_qua;
    double tong_tien_lai = 0;
    cout << "Lai suat hang nam la: ";
    cin >> lai_suat_hang_nam;
    cout << "So du ban dau la: ";
    cin >> so_du_ban_dau;
    cout << "So thang da troi qua ke tu ngay tai khoan dc lap la: ";
    cin >> so_thang_da_troi_qua;
    for (int i = 1; i <= so_thang_da_troi_qua; i++)
    {
        cout << "So tien gui vao trong thang la: ";
        cin >> so_tien_gui_vao_tai_khoan_trong_thang;
        so_du_ban_dau += so_tien_gui_vao_tai_khoan_trong_thang;
        tong_so_tien_gui_vao_tai_khoan += so_tien_gui_vao_tai_khoan_trong_thang;
        while (so_tien_gui_vao_tai_khoan_trong_thang < 0)
        {
            cout << "Khong chap nhan so am, vui long nhap lai." << endl;
            cout << "So tien gui vao trong thang la: ";
            cin >> so_tien_gui_vao_tai_khoan_trong_thang;
        }
        cout << "So tien rut tu tai khoan trong thang la: " << endl;
        cin >> so_tien_rut_tu_tai_khoan_trong_thang;
        so_du_ban_dau -= so_tien_rut_tu_tai_khoan_trong_thang;
        tong_so_tien_rut += so_tien_rut_tu_tai_khoan_trong_thang;
        if (so_du_ban_dau < 0)
        {
            cout << "Tai khoan da bi dong vi so du am." << endl;
            break;
        }
        while (so_tien_rut_tu_tai_khoan_trong_thang < 0)
        {
            cout << "Khong chap nhan so am, vui long nhap lai." << endl;
            cout << "So tien rut tu tai khoan trong thang la: ";
            cin >> so_tien_rut_tu_tai_khoan_trong_thang;
        }
        double lai_suat_hang_thang = lai_suat_hang_nam / 12;
        double tien_lai = lai_suat_hang_thang * so_du_ban_dau;
        so_du_ban_dau += tien_lai; //cong tien lai vao so du cuoi ky
        tong_tien_lai += tien_lai;
        if (so_du_ban_dau < 0) {
            cout << "Tai khoan da bi dong vi so du am." << endl;
            break;
        }
    }
    cout << "So du cuoi ky la: " << so_du_ban_dau << endl;
    cout << "tong so tien gui la: " << tong_so_tien_gui_vao_tai_khoan << endl;
    cout << "tong so tien rut la: " << tong_so_tien_rut << endl;
    cout << "Tong tien lai la: " << tong_tien_lai << endl;
}