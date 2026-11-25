#include <iostream>
using namespace std;
int main() {
    string name, disease;
    int age, token;
    cout << "Patient Name: ";
    cin >> name;
    cout << "Age: ";
    cin >> age;
    cout << "Disease: ";
    cin >> disease;
    token = 100 + age;
    cout << "\n--- HOSPITAL SLIP ---\n";
    cout << "Token No: " << token << endl;
    cout << "Name: " << name << " Age: " << age << endl;
    cout << "Disease: " << disease << endl;
    cout << "Fees: Rs 500" << endl;
    cout << "Doctor: Dr. Ahmed - Room No 3" << endl;
    return 0;
}
