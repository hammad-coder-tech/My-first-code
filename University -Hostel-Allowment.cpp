#include <iostream>
using namespace std;
int main(){
	string city;cout<<"Where Are You From?"; cin>>city;
	if(city=="Kotli"|| city=="Mirpur"|| city=="Muzaffarabad"|| city=="Rawalakot") cout<<"Hostel Allowed- AJK Quota";
	else cout<<"Apply For Hostel-based on Merit You Will Get";
	return 0;
}
