#include <iostream>
using namespace std;
int main(){
    string pass; cout << "Enter Password : "; cin >> pass;
    if(pass.length() >= 8) cout << "Strong Password - Good";
    else if(pass.length() >= 5) cout << "Medium - Make it Strong";
    else cout << "Weak - Will Hack Kar Easily!";
    return 0;
}
