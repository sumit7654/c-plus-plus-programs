#include<iostream>
using namespace std;
int main(){
	int num1,num2;
	float result;
	char ch;
	cout<<"Enter first number : "<<endl;
	cin>>num1;
	cout<<"Enter Second number : "<<endl;
	cin>>num2;
	cout<<"Choose operator to perform operation (+,-,* or /) : "<<endl;
	cin>>ch;

	switch(ch){
	case '+':
		result=num1+num2;
		break;
	case '-':
		result=num1-num2;
		break;
	case '*':
		result=num1*num2;
		break;
	case '/':
		result=num1/num2;
	default:
		cout<<"Invalid operator"<<endl;
	
}
	cout<<"Result "<<num1<< ch << num2 <<"=" << result<<endl;	
	}
