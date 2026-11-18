#include <iostream>
using namespace std;
int main(){
	int secret=9, guess;
	for (int i=1; i<=3; i++){
		cout<<"Chance "<<i<<"Guess:"; cin>>guess;
		if(guess==secret){ cout<<"You Win!";return 0;}
		else if(guess>secret) cout<<" write less"<< endl;
		else cout<<"write more"<<endl;
	}
	cout<<"Game Over! Secret was 9";
	return 0;
}
