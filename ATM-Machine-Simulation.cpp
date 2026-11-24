#include <iostream>
using namespace std;
int main(){
	int pin=1234, enteredPin, choice;
	double balance=100000;
	cout<<"Enter PIN:";
	cin>>enteredPin;
	if(enteredPin != pin){ cout<<"Wrong PIN!"; return 0;}
	do {
		cout<< "\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nChoice:";
		cin>> choice;
		if(choice ==1) cout<<"Balance:"<< balance<<endl;
		else if (choice==2){
			double amt; cout<<"Enter Amount:"; cin>>amt;
			balance += amt; cout<<"Deposited. New Balance:"<< balance<<endl;
		}
		else if (choice==3){
			double amt; cout<<"Enter Amount:"; cin>> amt;
			if(amt>balance) cout<<"Not Enough Balance!\n";
			else { balance -=amt ; cout <<"Take Your Cash. Balance:"<<balance<<endl;}
		}
	}
	while (choice !=4);
	return 0;
}
