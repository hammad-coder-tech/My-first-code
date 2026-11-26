#include <iostream>
using namespace std;
int main(){
    string code; float bill;
    cout << "Bill: "; cin >> bill;
    cout << "Discount Code: "; cin >> code;
    if(code=="HAMMAD50") cout << "50% Off! Pay: " << bill*0.5;
    else if(code=="KOTLI20") cout << "20% Off! Pay: " << bill*0.8;
    else cout << "Invalid Code - Full Pay: " << bill;
    return 0;
}
