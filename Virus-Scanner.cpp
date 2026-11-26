#include <iostream>
#include <string>
using namespace std;
int main(){
    string files[5]={"game.exe","photo.jpg","virus.exe","notes.pdf","hack.bat"};
    cout<<"Scanning... \n";
    for(int i=0;i<5;i++){
        if(files[i].find(".exe")!=string::npos || files[i].find(".bat")!=string::npos){
            cout<<files[i]<<" -> DANGER! Virus ! Delete "<<endl;
        } else {
            cout<<files[i]<<" -> SAFE"<<endl;
        }
    }
    return 0;
}
