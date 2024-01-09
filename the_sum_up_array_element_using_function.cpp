#include <iostream>
using namespace std;
int getsum(int x[],int n)
{
	int s=0;
	int i;
	for(i=0;i<n;i++)
	{
		s=s+x[i];
	}
	return s;
}
int main(){
	int arr[50],s,i,n;
	cout<<"Enter the number of element"<<endl;
	cin>>n;
	cout<<"Enter all "<<n<<"value in an array"<<endl;
	for(i=0;i<n;i++){
		cin>>arr[i];
	}
	s=getsum(arr,n);
	cout<<"The sum of values is "<<s<<endl;
	return 0;
}
