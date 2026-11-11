#include<iostream>
using namespace std;
int main(){
	int n,original,sum=0,rem;
	cout <<"Enter number :";
	cin>>n;
	while(n>0){
		rem=n%10;
		sum=sum+(rem*rem*rem);
		n=n/10;
	}
	if (sum==original)
	cout <<"Armstrong Number";
	else 
	cout<<"Not Armstrong";
	return 0;
}
