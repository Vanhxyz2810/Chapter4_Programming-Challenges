//Author:Vanhxyz
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for (int i = 0; i < 8; i++) {  // 8 dòng (128 / 16 = 8)
        for (int j = 0; j < 16; j++) {  // 16 ký tự mỗi dòng
            int ascii = i * 16 + j;  // Tính mã ASCII
            if (ascii < 32 || ascii == 127) {  // Ký tự không in được
                cout << setw(3) << ascii << " ";
            } else {
                cout << setw(3) << static_cast<char>(ascii) << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
