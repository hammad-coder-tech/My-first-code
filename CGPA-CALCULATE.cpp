#include <iostream>
using namespace std ;
int main (){
	int subjects;
	float marks,total=0;
	cout <<"How many subjects?";
	cin>> subjects;
	for (int i=1; i<= subjects; i++){
		cout <<"Enter marks of subject"<<i<<"(out of 100):";
		cin>> marks;
		total += marks;
	}
	float percentage = total /subjects;
	float CGPA= percentage /25;// simple formula
	cout <<"Percentage ="<< percentage<<"%"<< endl;
	cout <<"CGPA="<< CGPA <<"/4.0";
	return 0;
}
