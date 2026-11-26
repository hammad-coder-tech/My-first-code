#include <iostream>
using namespace std;
int main(){
	int kills, rank;cout<<"Kills:"; cin>>kills;
	cout<<"Rank(1-100):"; cin>>rank;
	int points=kills*10+(100-rank);
	cout <<"Total Points:"<<"-You will be Conqueror!";
	return 0;
}
