#include <iostream> 
using namespace std;
int main(){
	string task[3];
	cout<<"Enter 3 tasks for today:"<<endl;
	for(int i=0;i<3;i++){cout<<"Task"<<i+1<<": "; cin>>task[i];}
	cout<<endl<<"--- your tasks---"<<endl;
	for(int i=0 ;i<3;i++) cout<<i+1<<"."<<task[i]<<endl;
	return 0;
}
