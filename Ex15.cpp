#include <iostream>
using namespace std;

int main(){
    int msnv;
    long tl = 0, ttb = 0, tlb = 0, ttn = 0;
    long tongluong, thuetieubang, thuelienbang, thuethunhap, tongthuenhap, thanhtoanrong;
    do{

    cout << "Nhap ma so nhan vien(0 de ket thuc): ";
    cin >> msnv;
    if (msnv == 0 || msnv < 0){
        cout << "Ket thuc chuong trinh.\n";
        break;
    }
    do {
        cout << "Nhap tong luong: ";
        cin >> tongluong;
        tl += tongluong;
        if (tongluong < 0){
            cout << "Tong luong khong duoc nho hon 0. Vui long nhap lai.\n";
        }
        cout << "Nhap thue tieu bang: ";
        cin >> thuetieubang;
        ttb += thuetieubang;
        if (thuetieubang < 0){
            cout << "Thue tieu bang khong duoc nho hon 0. Vui long nhap lai.\n";
        }
        cout << "Nhap thue lien bang: ";
        cin >> thuelienbang;
        tlb += thuelienbang;
        if (thuelienbang < 0){
            cout << "Thue lien bang khong duoc nho hon 0. Vui long nhap lai.\n";
        }
        cout << "Nhap thue thu nhap: ";
        cin >> thuethunhap;
        ttn += thuethunhap;
        if (thuethunhap < 0){
            cout << "Thue thu nhap khong duoc nho hon 0. Vui long nhap lai.\n";
        }
    } while (tongluong < 0 || thuetieubang < 0 || thuelienbang < 0 || thuethunhap < 0);
    tongthuenhap = ttb + tlb + ttn;
    thanhtoanrong = tl - (ttb + tlb + ttn);

    

    
    } while (msnv != 0);
    cout << "Tong thue nhap: " << tongthuenhap << endl;
    cout << "Thanh toan rong: " << thanhtoanrong << endl;
}