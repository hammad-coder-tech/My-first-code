#include <iostream>
using namespace std;
int main(){
	double loan, years;cout<<"Loan Amount:" ; cin>>loan;
	cout<<"Years:";cin>>years;
	double monthly=loan/(years*12);
	cout<<"Monthly EMI:"<<monthly;
	return 0;
}
