#include <iostream>
using namespace std;
int main(){
    int copies; cout << "Range of Copies? "; cin >> copies;
    int price = copies * 30;
    if(copies >= 8) price = 200;
    cout << "Total: Rs " << price << " - 10 Minute ";
    return 0;
}
