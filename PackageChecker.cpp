#include <iostream>
using namespace std;
int main(){
	int balance; cout<<" Your Balance: "; cin>>balance;
	if( balance>=300) cout<<"You can buy Monthly Package";
	else if(balance>=100) cout<<"You can buy Weekly Package" ;
	else cout <<"Recharge ,Low Balance";
	return 0;	
}
