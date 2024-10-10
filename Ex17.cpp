#include <iostream>
using namespace std;

int main()
{
    int tongi1 = 0,tongi2 = 0,tongi3 = 0,tongi4 = 0,tongi5 = 0;
    double doanh_so_ban_hang1, doanh_so_ban_hang2, doanh_so_ban_hang3, doanh_so_ban_hang4, doanh_so_ban_hang5;
    cout << "Nhap vao doanh so ban hang cua cua hang thu 1: ";
    cin >> doanh_so_ban_hang1;

    cout << "Nhap vao doanh so ban hang cua cua hang thu 2: ";
    cin >> doanh_so_ban_hang2;

    cout << "Nhap vao doanh so ban hang cua cua hang thu 3: ";
    cin >> doanh_so_ban_hang3;

    cout << "Nhap vao doanh so ban hang cua cua hang thu 4: ";
    cin >> doanh_so_ban_hang4;

    cout << "Nhap vao doanh so ban hang cua cua hang thu 5: ";
    cin >> doanh_so_ban_hang5;
    cout << "====================" << endl;
    cout << "SALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;
    cout << "Cua Hang 1: ";
    for (int i = 1; i <= doanh_so_ban_hang1 / 100; i++)
    {
        cout << "* ";
        tongi1+=100;
    }
    cout << " | => " << tongi1 << "$";
    cout << endl;
    cout << "Cua Hang 2: ";
    for (int i = 1; i <= doanh_so_ban_hang2 / 100; i++)
    {
        cout << "* ";
        tongi2+=100;
    }
    cout << " | => " << tongi2 << "$";
    cout << endl;
    cout << "Cua Hang 3: ";
    for (int i = 1; i <= doanh_so_ban_hang3 / 100; i++)
    {
        cout << "* ";
        tongi3+=100;
    }
    cout << " | => " << tongi3 << "$";
    cout << endl;
    cout << "Cua Hang 4: ";
    for (int i = 1; i <= doanh_so_ban_hang4 / 100; i++)
    {
        tongi4+=100;
        cout << "* ";
    }
    cout << " | => " << tongi4 << "$";
    cout << endl;
    cout << "Cua Hang 5: ";
    for (int i = 1; i <= doanh_so_ban_hang5 / 100; i++)
    {
        cout << "* ";
        tongi5+=100;
    }
    cout << " | => " << tongi5 << "$";
}