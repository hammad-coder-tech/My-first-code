#include <iostream>
using namespace std;
int main() {
    string items[5] = {"Rent", "Food", "Petrol", "Tuition Fee", "Other"};
    double expense[5], total = 0, income;
    cout << "Enter Monthly Income: "; cin >> income;
    for (int i = 0; i < 5; i++) {
        cout << "Enter Expense for " << items[i] << ": ";
        cin >> expense[i];
        total += expense[i];
    }
    cout << "\nTotal Expense: " << total << endl;
    cout << "Remaining Saving: " << income - total << endl;
    if (total > income) cout << "Warning: You are spending more than income!" << endl;
    else cout << "Good! You are saving money." << endl;
    return 0;
}
