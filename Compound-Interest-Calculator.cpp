#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double p,r, amount;
	int n, t;
	cout <<"Enter Principal :"; cin >>p;
	cout<<"Enter Rate(%):"; cin>>r;
	cout<<"Times Interest Per Year:"; cin>>n;
	cout<<"Years:"; cin>>t;
	amount =p*pow((1+(r/100)/n), n*t);
	cout <<"Final Amount:"<< amount-p<<endl;
	cout<<"Interest Earned:"<< amount-p<<endl;
	return 0;
}
