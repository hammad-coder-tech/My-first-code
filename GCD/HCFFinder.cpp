#include <iostream>
using namespace std;
int main(){
	int a,b, gcd=1;
	cout<<"Enter 2 Numbers:";
	cin>> a>>b;
	for(int i=1; i<=a && i<=b; i++){
		if(a% i==0&&b%i==0) gcd=i;
	}
	cout<<"GCD/HCF:"<<gcd;
	return 0;
}
