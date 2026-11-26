#include <iostream>
using namespace std;
int main(){
	float amount; cout<<"How much money you want to send?"; cin>> amount;
	float fee=0;
	if(amount>5000) fee=50;
	cout<<"Fee: Rs"<<fee<<"\nTotal cut:"<<amount+fee;
	return 0;
}
