#include <iostream>
using namespace std;
int main(){
    int age, weight;
    cout << "Age: "; cin >> age;
    cout << "Weight (kg): "; cin >> weight;
    if(age >= 18 && age <= 60 && weight >= 50) cout << "You Can Donate Blood ";
    else cout << "You Cannot Donate";
    return 0;
}
