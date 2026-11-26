#include <iostream>
using namespace std;
int main(){
	float crypto; cout<<"Crypto Price?(In Rs):"; cin>>crypto;
	if(crypto>=150000) cout<<"Zakat :Rs"<<crypto*0.025;
	else cout<<"zakat is not on less than nasab";
	return 0;
}
