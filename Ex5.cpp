#include <iostream>
using namespace std;
int main(){
    double tax = 2500;
    double tax_up_year = 0;
    double tax_to_pay;
    // double sum = 1;
    for (int i = 1;i <=6;i++){
        tax_up_year += 0.04;
        tax_to_pay = tax * tax_up_year;
        cout << tax_to_pay << "\t";
    }
}