#include <iostream>
using namespace std;
int main(){
    int views, likes; cout << "Views: "; cin >> views;
    cout << "Likes: "; cin >> likes;
    float ratio = (likes*100.0)/views;
    cout << "Like Ratio: " << ratio << "%\n";
    if(ratio > 10) cout << "VIRAL - Congratulations!";
    else cout << "Normal- Change Thumbnail";
    return 0;
}
