#include <iostream>
using namespace std;
int main(){
	int pin=1234;
	int enteredPin;
	int balance=50000;
	int choice;
	int amount;
	cout<<"=== Welcome to Hammad Bank ATM ===" <<endl;
	cout <<"Enter Your Pin:";
	cin >> enteredPin;
	//PIN Check
	if (enteredPin !=pin){
		cout<<"Wrong PIN Card Blocked."<<endl;
		return 0;
	}
	cout<<"PIN Correct! Welcome Hammad"<<endl;
	// ATM Menu- til user exit
	while (true){
		cout <<"\n---ATM Menu---"<< endl;
		cout <<"1. Check Balance"<<endl;
		cout <<"2.Deposit Money"<<endl;
		cout <<"3.Withdraw Money"<<endl;
		cout<<"4.Exit"<<endl;
		cin>>choice;
		if(choice==1){
			cout <<"Your Balance is:"<<balance <<"Rs"<<endl;
		}
		else if(choice==2){
			cout<<"Enter Amount to deposit:";
			cin>>amount;
			balance=balance+amount;
			cout<<"Deposit Successful! New Balance:"<< balance << endl;
		}
		else if(choice==3){
			cout<<"Enter Amount to Withdraw:";
			cin>>amount;
			if(amount>balance){
				cout<<" Not Enough Balance!"<< endl;
			} else {
				balance=balance-amount;
				cout<<"Withdraw Successful! New Balance:"<<balance<<endl;
			}
		}
		else if(choice==4){
			cout<<"Thank You!."<<balance<<endl;
			break;
		}
		else{
			cout<<"Wrong Choice! Try Again."<< endl;
		}
	}
	return 0;
}
