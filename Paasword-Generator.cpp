#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    srand(time(0));
    string chars = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@#$";
    cout << "Your Strong Password: ";
    for(int i=0; i<10; i++) {
        int r = rand() % chars.length();
        cout << chars[r];
    }
    cout << "\nIs Do not share it!" << endl;
    return 0;
}
