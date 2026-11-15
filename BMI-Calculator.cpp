#include <iostream>
using namespace std;
int main (){
	float weight, height,bmi ;
	cout<<"Enter weight (kg):";
	cin >> weight;
	cout <<"Enter height (meters):" ;
	cin >> height;
	bmi =weight /(height*height);
	cout <<"Your bmi ="<<bmi<<endl;
	if (bmi<18.5)
	cout<<"underweight";
	else if (bmi<25)
	cout<<"Normal";
	else if (bmi <30)
	cout <<"Overweight";
	else 
	cout<<"obese";
	return 0;
}
