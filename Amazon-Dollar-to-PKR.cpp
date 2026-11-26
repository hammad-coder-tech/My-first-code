#include <iostream>
using namespace std;
int main(){
	float dollar; cout<<"Amazon Price($):"; cin>>dollar;
	float pkr=dollar*276;
	float custom=pkr*0.30;
	cout<<"Reached in Pakistan:Rs"<<pkr+custom<<"(Custom+Price)";
	return 0;
}
