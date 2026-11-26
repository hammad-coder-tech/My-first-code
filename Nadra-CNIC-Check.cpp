#include <iostream>
using namespace std;
int main(){
    string cnic; cout << "CNIC Number: "; cin >> cnic;
    if(cnic.length()==13) cout << "Valid CNIC - Verified";
    else cout << "Invalid - 13 Digit Require";
    return 0;
}
