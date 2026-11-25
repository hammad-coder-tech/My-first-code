#include <iostream>
using namespace std;
int main() {
    string books[5] = {"C++", "Python", "HTML", "AI", "Maths"};
    int choice;
    cout << "LIBRARY - BOOKS:\n";
    for(int i=0; i<5; i++) cout << i+1 << ". " << books[i] << endl;
    cout << "Which Book you need? Enter Number : ";
    cin >> choice;
    cout << "You Borrow: " << books[choice-1] << endl;
    cout << "Return date: After 14 Days" << endl;
    cout << "If Late Rs 10 / day fine" << endl;
    return 0;
}
