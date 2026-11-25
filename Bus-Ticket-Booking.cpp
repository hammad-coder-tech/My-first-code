#include <iostream>
using namespace std;
int main() {
    string name, from, to;
    int seats;
    cout << "Name: ";
    cin >> name;
    cout << "From: ";
    cin >> from;
    cout << "To: ";
    cin >> to;
    cout << "How many seats: ";
    cin >> seats;
    int ticket = 1200;
    cout << "\n--- BUS TICKET ---\n";
    cout << "Passenger: " << name << endl;
    cout << from << " -> " << to << endl;
    cout << "Seats: " << seats << endl;
    cout << "Total = Rs " << ticket*seats << endl;
    cout << "Bus Time: 9:00 AM - Kotli Adda" << endl;
    return 0;
}
