#include <iostream>
using namespace std;
int main() {
	int a,b;
	char op;
	cout <<"Enter first number:";
	cin >>a;
	cout <<"Enter second number:";
	cin>>b;
	cout <<"+ - * /:";
	cin>>op;
	if (op=='+'){
		cout <<"Answer:"<<a+b;
	}
	else if (op=='-'){
		cout <<"Answer:"<<a-b;
	}
	else if (op=='*'){
		cout<<"Answer:"<<a*b;
	}
	else if (op=='/'){
		cout<<"Answer:"<<a/b;
	}
	else {
		cout<<"invalid operator!";
	}
		 	 return 0;
	
};
