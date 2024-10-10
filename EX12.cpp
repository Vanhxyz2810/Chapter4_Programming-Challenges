#include <iostream>
#include <iomanip>
using namespace std;
int main (){
    double f;
    double c;
    const double CT = 1.8;
    for (int i = 0;i <=20;i++){
        f = CT * i + 32;
        c = ((i - 32) * 5.0) / 9.0;
        cout << i << " do C = " << f << " do F" << endl;    
        cout << fixed << setprecision(2) << i << " do F = " << c << " do C" << endl;    
    }
}