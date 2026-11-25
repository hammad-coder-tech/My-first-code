#include <iostream>
using namespace std;
int main() {
    int choice, qty;
    cout << "RESTAURANT MENU:\n";
    cout << "1. Biryani - Rs 350\n";
    cout << "2. Karahi - Rs 800\n";
    cout << "3. Tea - Rs 100\n";
    cout << "4. Cold Drink - Rs 150\n";
    cout << "What to Order? ";
    cin >> choice;
    cout << "How much quantity? ";
    cin >> qty;
    int price = 0;
    if(choice==1) price=350;
    if(choice==2) price=800;
    if(choice==3) price=100;
    if(choice==4) price=150;
    cout << "Total Bill = Rs " << price*qty << endl;
    cout << "Thank you! Your order will be ready in 30 min." << endl;
    return 0;
}
