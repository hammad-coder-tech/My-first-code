#include <iostream>
using namespace std;
int main() {
    double balance = 50000, transactions[10];
    int count = 0, choice;
    do {
        cout << "\n1. Deposit\n2. Withdraw\n3. Show History\n4. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            double amt; cout << "Deposit: "; cin >> amt;
            balance += amt; transactions[count++] = amt;
        } else if (choice == 2) {
            double amt; cout << "Withdraw: "; cin >> amt;
            if (amt <= balance) { balance -= amt; transactions[count++] = -amt; }
            else cout << "Low Balance!\n";
        } else if (choice == 3) {
            cout << "--- Transaction History ---\n";
            for (int i = 0; i < count; i++) {
                if (transactions[i] > 0) cout << "Deposit: +" << transactions[i] << endl;
                else cout << "Withdraw: " << transactions[i] << endl;
            }
            cout << "Final Balance: " << balance << endl;
        }
    } while (choice != 4);
    return 0;
}
