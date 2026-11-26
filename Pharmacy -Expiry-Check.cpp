#include <iostream>
using namespace std;
int main(){
    string med; int qty, price, expYear;
    cout << "Name of Medicine: "; cin >> med;
    cout << "Qty: "; cin >> qty; cout << "Price: "; cin >> price;
    cout << "Expiry Year: "; cin >> expYear;
    if(expYear < 2026) cout << "EXPIRED - Don't sell!";
    else cout << "Bill: " << qty * price << " - Safe ";
    return 0;
}
