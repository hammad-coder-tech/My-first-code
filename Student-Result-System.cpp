#include<iostream>
using namespace std;
int main(){
	int marks[5], total=0;
	float percentage;
	cout <<"Enter marks of 5 subjects:"<< endl;
	for(int i =0; i<5;i++){
		cin >> marks[i];
		total += marks[i];
	}
	percentage=total /5.0;
	cout <<"Total:"<<total<< endl;
	cout <<"Percentage:"<<percentage<<"%"<< endl;
	if(percentage>=80)
	cout<<"Grade:A";
	else if (percentage >=60)
	cout <<"Grade:B";
	else if (percentage >=40)
	cout <<"Grade:C";
	else 
	cout <<"Grade:Fail";
	return 0;
}
