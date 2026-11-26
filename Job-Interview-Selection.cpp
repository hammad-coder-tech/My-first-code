#include <iostream>
using namespace std;
int main(){
    int cgpa; int skill;
    cout << "CGPA (0-4): "; cin >> cgpa;
    cout << "Skill Test (Out of 100 ): "; cin >> skill;
    if(cgpa >= 3 && skill >= 60) cout << "Selected For Interview!";
    else cout << "Rejected -Gain Skill";
    return 0;
}
