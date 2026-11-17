#include <iostream>
using namespace std;
int main(){
	int hours[7], total =0;
	cout<<"Enter study hours for 7 days: "<<endl;
	for(int i=0;i<7; i++){ cout<<"Day" <<i+1<<":"; cin>>hours[i];
	total +=hours[i]; }
	cout<<"Weekly Total:"<<total<<"hours"<<endl;
	if (total>=14) cout<<"Great! You are on Top 1%Track";
	else cout<<"Need more hardwork-Target 14 hours/week";
	return 0;
}
