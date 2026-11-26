#include <iostream>
using namespace std;
int main(){
    float used, limit=100; cout << "How many GB used? "; cin >> used;
    float extra = 0;
    if(used > limit) extra = (used-limit)*100;
    cout << "Monthly Bill: 3000 + Extra " << extra << " = " << 3000+extra;
    return 0;
}
