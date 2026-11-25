#include <iostream>
#include <string>
using namespace std;
int main(){
    string q;
    cout<<"AI Bot: Salam! Ask something (Type exit to Stop )\n";
    while(true){
        cout<<"You: "; getline(cin, q);
        if(q=="exit") break;
        if(q.find("name")!=string::npos) cout<<"Bot: My name is Hammad AI !"<<endl;
        else if(q.find("Country")!=string::npos) cout<<"Bot: CGPA 3.5+ !"<<endl;
        else if(q.find("Money")!=string::npos) cout<<"Bot: Tuition , income!"<<endl;
        else cout<<"Bot: i don't know!"<<endl;
    }
    return 0;
}
