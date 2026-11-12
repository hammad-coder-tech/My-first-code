#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
	srand(time(0));
	int secret=rand()%100+1;
	int guess;
	cout<<"Guess number(1 to 100:";
	while(true){
		cin >>guess;
		if(guess==secret){
			cout<<"Correct! You Win!";
			break;
		}else if(guess<secret){
			cout<<"Too Low!Try again:";
		}else{
			cout <<"Too High! Try again:";
		}
	}
	return 0;
}
