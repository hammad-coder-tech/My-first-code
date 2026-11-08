using namespace std;
int main (){
	int a,b,c;
	cout<<"Enter first number:";
	cin>>a;
	cout<<"Enter second number:";
	cin>>b;
	cout<<"Enter third number:";
	cin>>c;
	if (a>b&&b>c){
		cout<<"Largest is :"<<a<< endl;
	}
	else if (b>a&&b>c){
		cout <<"Largest is :"<<b<<endl;
	}
	else{
		cout <<"Largest is:"<<c<<endl;
	}
	return 0;
}
