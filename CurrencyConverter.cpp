#include <iostream>
using namespace std;
int main(){
	double pkr; int choice;
	cout<<"pkr :" ; cin>>pkr;
	cout<<"1-USD 2-Euro:."; cin>>choice;
	if(choice==1) cout<<"USD: "<<pkr/278;
	else cout<<"Euro:"<<pkr/300;
	return 0;
}
