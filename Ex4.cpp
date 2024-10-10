#include <iostream>
using namespace std;

int main(){
    float calo;
    for (int i = 5;i <= 30;i+=5){
        calo = 3.6 * i;
        cout <<"So calo sau " << i << "phut la: " << calo << endl;
    }
}
