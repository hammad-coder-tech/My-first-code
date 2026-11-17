#include <iostream>
using namespace std;
int main(){
	int marks; cout<<"Matric Marks(out of 1100):" ; cin>>marks;
	double per =marks*100.0/1100;
	cout <<"Percentage: "<<per<<"%"<<endl;
	if(per>=60) cout<<"Eligible for BSCS";
	else cout<<"Not Eligible";
	return 0;
}
