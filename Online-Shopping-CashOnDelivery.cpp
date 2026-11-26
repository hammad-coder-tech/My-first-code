#include <iostream>
using namespace std;
int main(){
    float price; cout << "Product Price: "; cin >> price;
    float delivery = 250;
    if(price > 3000) delivery = 0;
    cout << "Delivery: " << delivery << "\nTotal COD: " << price + delivery;
    return 0;
}
