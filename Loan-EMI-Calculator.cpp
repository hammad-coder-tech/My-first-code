#include <iostream>
#include <cmath>
using namespace std;
int main(){
	double loan, rate, emi;
	int months;
	cout<<"Enter Loan Amount:"; cin>> loan;
	cout <<"Enter Yearly Interest Rate(%):"; cin>>rate;
	cout<<"Enter Months:"; cin>> months;
	double monthlyRate =rate/1200;
	emi=(loan*monthlyRate* pow(1+monthlyRate,months))/(pow(1+monthlyRate, months)-1);
	cout <<"Monthly EMI:"<<emi<<endl;
	cout <<"Total Payment:"<<emi*months<<endl;
	cout<<"Total Interest:"<<(emi*months-loan)<<endl;
	return 0;
}
