#include <iostream>
using namespace std;
int main(){
	float c, f;
	int choice ;
	cout <<"1. Celsius to Fahrenheit \ n2. Fahrenheit to Celsius\n Enter choice :";
	cin >> choice;
	if (choice ==1){
		cout <<" Enter Celsius:";
		cin >> c;
		f=(c*9/5)+32;
		cout<<"Fahrenheit="<<f;
	}else{
		cout<<"Enter Fahrenheit:";
		cin >>f;
		c=(f-32)*5/9;
		cout <<"Celsius ="<<c;
	}
	return 0;
}
