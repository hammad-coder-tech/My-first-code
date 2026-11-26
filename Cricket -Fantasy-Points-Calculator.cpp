#include <iostream>
using namespace std;
int main(){
	int runs, wickets; cout<<"Your Player's Runs:"; cin>>runs;
	cout<<"Wickets:"; cin>>wickets;
	int points=runs*1+wickets*25;
	cout<<"Fantasy Points:"<<points;
	return 0;
}
