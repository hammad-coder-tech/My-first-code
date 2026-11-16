#include <iostream>
#include <unistd.h>
using namespace std;
int main (){
	int sec ;
	cout <<"Enter seconds for countdown:";
	cin >> sec;
	for (int i=sec; i>=0; i--){
		cout <<"\rTime left:"<<i<<"sec"<< flush;
		sleep(1);
	}
	cout <<"\nTime's Up!";
	return 0;
}
