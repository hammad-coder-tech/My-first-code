#include <iostream>
using namespace std;
int main(){
	int sec, h, m, s;
	cout<<"Enter Seconds:";
	cin>>sec;
	h=sec/3600;
	m=(sec%3600)/60;
	s=sec%60;
	cout<<h<<"Hours:"<<m<<"Mins:"<<s<<"Secs";
	return 0;
}
