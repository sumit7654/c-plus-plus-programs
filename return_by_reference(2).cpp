#include<iostream>
using namespace std;
int &retbyref();
int num;               //global variable
main()
{
	retbyref() = 2;
	cout<<"Value of num = "<<num;
}
int &retbyref()
{
	return num;
}
