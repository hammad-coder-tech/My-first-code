#include <iostream>
using namespace std;
int main(){
    string track; cout << "Tracking ID: "; cin >> track;
    int last = track[track.length()-1] - '0';
    if(last % 2 == 0) cout << "Status: Parcel Reached in Kotli";
    else cout << "Status: Parcel is om way- Tomorrow will be delivered";
    return 0;
}
