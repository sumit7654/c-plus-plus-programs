#include<iostream>
using namespace std;
int &retbyref();
int num;
main(){
	
	retbyref()=2;
	cout<<"The value of num= "<<num<<endl;
	
}
int &retbyref(){
	return num;
}
