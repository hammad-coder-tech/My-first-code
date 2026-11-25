#include <iostream>
using namespace std;
int main() {
    int token = 0, serving = 1, choice;
    do {
        cout << "\n1. Take Token\n2. Serve Next Customer\n3. Exit\nChoice: ";
        cin >> choice;
        if (choice == 1) {
            token++;
            cout << "Your Token Number: " << token << endl;
            cout << "People Waiting: " << token - serving + 1 << endl;
        } else if (choice == 2) {
            if (serving <= token) {
                cout << "Now Serving Token: " << serving << endl;
                serving++;
            } else cout << "No Customer Waiting!\n";
        }
    } while (choice != 3);
    return 0;
}
