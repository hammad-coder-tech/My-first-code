#include <iostream>
using namespace std;
int main(){
	int balance=10000, choice, amount;
	cout<<"1-Deposit 2-Withdraw 3-Balance:"; cin>>choice;
	if(choice==1){ cout<<"Deposit:";cin>>amount; balance+=amount;}
	else if (choice==2){ cout<<"Withdraw:"; cin>>amount; if (amount<=balance) balance-=amount; else cout<<"Not Enough";}
	cout<<"New Balance:"<<balance;
	return 0;
}
