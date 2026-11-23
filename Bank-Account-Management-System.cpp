#include <iostream>
using namespace std;
class BankAccount {
	string name;
	int accNo;
	double balance;
	public:
	void create(string n, int a,double b){
		name=n; accNo=a; balance=b;
		cout<<"Account Created for"<< name<<endl;
	}
	void deposit(double amt){
		balance+= amt;
		cout<<"Deposited:"<<amt<<"|New Balance:"<<balance<<endl;
	}
	void withdraw (double amt){
		if(amt>balance) cout <<"Insufficient Balance!"<<endl;
		else{
			balance-= amt;
			cout<<"Withdrawn:"<< amt<<"|Balance:"<< balance<<endl;
		}
	}
	void show(){
		cout<<"\nName:"<<name<<"\nAcc No:"<<accNo<<"\nBalance:"<< balance<<endl;
	}
};
int main(){
	BankAccount b1;
	b1. create("Hammad",1001,50000);
	b1. deposit(10000);
	b1. withdraw(5000);
	b1. show();
	return 0;
}
