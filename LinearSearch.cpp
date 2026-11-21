#include <iostream>
using namespace std;
int main(){
	int arr[5],search,found=0;
	cout<<"Enter 5 Numbers:";
	for (int i=0; i<5; i++) cin>> arr[i];
	cout <<"Enter Numbers to Search:";
	cin>>search;
	for(int i=0; i<5; i++){
		if(arr[i]== search){
			cout<<"Found at Position"<<i+1;
			found=1;
			break;
		}
	}
	if(found==0) cout<<"Not Found!";
	return 0;
}
