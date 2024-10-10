#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int number;
    int allnumberinfile;
    int tongcacso = 0;
    double giatritb;
    ifstream inputFile;
    inputFile.open("random.txt");
    cout << "Reading datas from the file random.txt \n"; 
    while (inputFile >> number)
    {
        allnumberinfile++;
        cout << number << endl;
        tongcacso += number;
        giatritb = double(tongcacso) / allnumberinfile;
    }
    
    inputFile.close();
    cout << "So luong cac so trong tep la: " << allnumberinfile << endl;
    cout << "Tong cua tat ca cac so trong tep la: " << tongcacso << endl;
    cout << "Gia tri trung binh cua tat ca cac so trong tep la: " << giatritb;
}