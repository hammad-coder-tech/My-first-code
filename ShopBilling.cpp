#include <iostream>
using namespace std;
int main(){
	int items; double price,total=0;
	cout<<"How many items:"; cin>>items;
	for(int i=0;i<items; i++){cout<<"Price:"; cin>>price; total+=price;}
	cout<<"Total Bill:"<<total<<endl;
	if (total>5000) cout<<"Discount 10%:"<<total*0.9;
	return 0;
}
