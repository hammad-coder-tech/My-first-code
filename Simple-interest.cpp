#include<iostream>
using namespace std;
int main(){
	float principal,rate,time;
	float interest;
	cout<<"Enter principal amount:";
	cin>>principal;
	cout<<"Enter rate:";
	cin>>rate;
	cout<<"Enter time:";
	cin>>time;
	interest= (principal*rate*time)/100;
	cout<<"Simple interest is:"<<interest<<endl;
	return 0;
}
