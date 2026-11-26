#include <iostream>
using namespace std;
int main(){
    float km; cout << "Delivery Far From How KM? "; cin >> km;
    float time = (km / 40) * 60;
    cout << "Reached By Drone: " << time << "In Minute";
    return 0;
}
