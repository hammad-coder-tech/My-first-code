#include <iostream>
using namespace std;
int main(){
	float distance ,time;
	cout<<"Enter Distance (KM):";
	cin>>distance;
	cout<<"Enter Time(Hours):";
	cin>>time;
	cout<<"Speed:"<< distance/time<<"Km/H" <<endl;
	cout<<"Kotli to Rawalpindi(150Km) in:"<<150/(distance/time)<<"Hours";
	return 0;
}
