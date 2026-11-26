#include <iostream>
using namespace std;
int main(){
    float price; cout << "Fiverr Order Price in Dollar? "; cin >> price;
    float fee = price * 0.20;
    float dollarRate = 276;
    cout << "Fiverr Fee: $" << fee << "\nYou will get: Rs " << (price-fee)*dollarRate;
    return 0;
}
