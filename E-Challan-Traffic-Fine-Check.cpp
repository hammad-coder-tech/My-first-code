#include <iostream>
using namespace std;
int main(){
    int speed; cout << "Your Speed? "; cin >> speed;
    if(speed > 80) cout << "Challan: Rs 2000 - Speed was Fast";
    else if(speed > 60) cout << "Warning - Drive slowly";
    else cout << "No Challan - Safe Driving";
    return 0;
}
