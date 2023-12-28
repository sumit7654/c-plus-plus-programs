#include<iostream>
using namespace std;
int &retbyref(int &ref);
int main(){
	int a=10;
	int &b=retbyref(a);
	cout<<"Value of a"<<a<<endl;
	cout<<"The address of a "<<&a<<endl;
	cout<<"The value of b "<<b<<endl;
	cout<<"The address of b "<<&b<<endl;
	
}
int &retbyref(int &ref){
	cout<<"The value of ref= "<<ref<<endl;
	cout<<"The address of ret= "<<&ref<<endl;
	return ref;
}
