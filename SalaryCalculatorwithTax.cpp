#include <iostream>
using namespace std;
int main(){
	double salary; cout<<"Monthly Salary:" ;cin>>salary;
	double tax= salary*0.05;
	cout<<"Tax 5%:"<<tax<<endl;
	cout<<"Net Salary:"<<salary-tax;
	return 0;
}
