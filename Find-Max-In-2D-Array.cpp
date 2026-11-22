#include <iostream>
using namespace std;
int main(){
	int marks[3][3], max;
	cout<<"Enter 3*3 Marks:";
	for(int i=0; i<3; i++)
	for(int j=0; j<3; j++) cin>> marks[i][j];
	max=marks[0][0];
	for(int i=0; i<3; i++)
	for (int j=0; j<3; j++)
	if(marks[i][j]>max)max=marks[i][j];
	cout<<"Highest Marks:"<<max;
	return 0;
}
