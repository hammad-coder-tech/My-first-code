#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand (time(0));
	int d1= rand()%6+1, d2= rand()%6+1;
	cout<<"Dice 1:"<<d1<<endl<<"Dice 2:"<<d2<<endl;
	cout <<"Total:."<<d1+d2;
	if (d1==d2) cout<<endl<<"Double! You Win!";
	return 0;
}
