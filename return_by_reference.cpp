#include<iostream>
using namespace std;
int &retbyref(int &ref);
main()
{
	int a = 10;
	int &b = retbyref(a);
	cout<<"Value of a = "<<a<<endl;
	cout<<"The address of a = "<<&a<<endl;
	cout<<"Value of b = "<<b<<endl;
	cout<<"The address of b = "<<&b<<endl;
}
int &retbyref(int &ref)
{
	cout<<"Value of ref = "<<ref<<endl;
	cout<<"The address of ref = "<<&ref<<endl;
	return ref;
}
