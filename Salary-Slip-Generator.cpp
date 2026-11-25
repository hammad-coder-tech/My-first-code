#include <iostream>
using namespace std;
int main() {
    string name;
    double basic, allowance, tax, net;
    cout << "Enter Employee Name: ";
    cin >> name;
    cout << "Enter Basic Salary: "; cin >> basic;
    cout << "Enter Allowance: "; cin >> allowance;
    double gross = basic + allowance;
    tax = gross * 0.05; // 5% tax
    net = gross - tax;
    cout << "\n----- SALARY SLIP -----\n";
    cout << "Name: " << name << endl;
    cout << "Basic: " << basic << endl;
    cout << "Allowance: " << allowance << endl;
    cout << "Gross: " << gross << endl;
    cout << "Tax (5%): " << tax << endl;
    cout << "Net Salary: " << net << endl;
    return 0;
}
