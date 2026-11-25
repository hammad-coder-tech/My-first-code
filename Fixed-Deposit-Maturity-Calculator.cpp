##include <iostream>
#include <cmath>
using namespace std;
int main(){
	double principal, rate, maturity;
	int years;
	cout<<"Enter FD Amount:"; cin>> principal;
	cout<<"Enter Interest Rate(%):"; cin>> rate;
	cout<<"Enter Years:"; cin>> years;
	maturity= principal *pow((1+rate/100),years);
	cout<<"Maturity Amount After"<< years<<"Years:"<<maturity<<endl;
	cout<<"Profit:"<< maturity-principal<< endl;
	return 0;
}
