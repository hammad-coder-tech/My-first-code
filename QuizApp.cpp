#include <iostream>
using namespace std;
int main(){
	int score=0, ans;
	cout<<"1. Pakistan's Capital? 1-Islamabad 2-Lahore: ";cin>>ans;
	if (ans==1) score++;
	cout<<"2. 2+2=? 1-3 2-4:"; cin>>ans;
	if(ans==2) score++;
	cout<<"3.who make C++ ? 1-Bjarne 2-Bill:"; cin>>ans;
	if(ans==1) score++;
	cout<<"Your Score:" <<score<<"/3";
	return 0;
}
