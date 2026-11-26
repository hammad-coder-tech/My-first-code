#include <iostream>
using namespace std;
int main(){
	int wrong;cout<<"How many times entered Wrong Pin?";cin>>wrong;
	if(wrong>=3) cout<<"Card is Block-Go to Bank";
	else cout<<"Last Chance:"<<3-wrong;
	return 0;
}
