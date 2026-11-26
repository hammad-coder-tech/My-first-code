#include <iostream>
using namespace std;
int main(){
    int members; cout << "How many Persons Will Watch? "; cin >> members;
    if(members==1) cout << "Mobile Plan: Rs 450 - Best ";
    else if(members<=2) cout << "Basic Plan: Rs 850";
    else cout << "Premium Plan: Rs 1500 - 4 Persons can watch";
    return 0;
}
