#include <iostream>
using namespace std;
int main() {
    string num;
    int amount, choice;
    cout << "Mobile Number: ";
    cin >> num;
    cout << "1. Jazz  2. Zong  3. Telenor  4. Ufone\n";
    cout << "ChoosevNetwork: ";
    cin >> choice;
    cout << "How much recharge? ";
    cin >> amount;
    cout << "\nRecharge Successful!\n";
    cout << "Number: " << num << endl;
    cout << "Amount: Rs " << amount << endl;
    cout << "Tax: Rs " << amount*0.15 << " cut" << endl;
    cout << "Balance: Rs " << amount - amount*0.15 << endl;
    return 0;
}
