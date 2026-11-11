#include <iostream>
#include <string>
using namespace std;
int main(){
	string password="admin123";
	string input;
	cout<<"Enter Password:";
	cin >>input;
	if(input==password)
	cout<<"Enter Password:";
	cin>>input;
	if(input==password)
	cout<<"Access Granted!";
	else 
	cout <<"Wrong Password! Access Denied.";
	return 0;
}
