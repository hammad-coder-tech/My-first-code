#include <iostream>
using namespace std;
int main(){
	float cost, sell; cout<<"At which price you buy it?"; cin>>cost;
	cout <<"At which price you sell it?"; cin>>sell;
	float profit=sell-cost-(sell*0.10);
	cout<<"Profit after Daraz Fee: Rs"<<profit;
	return 0;
}
