#include<iostream>
using namespace std;
int main(){
	int a[50],i,n,search;
	cout<<"Enter the size of an array :"<<endl;
	cin>>n;
	cout<<"Enter " << n <<"element in array"<<endl;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	cout<<"Enter the element to be searched : "<<endl;
	cin>>search;
	int flag=0;
	for(i=0;i<n;i++){
		if(a[i]==search){
			flag++;
			cout<<"Element is "<<search<<"present at location "<<i+1<<endl;
		}
	}
	if(flag==0)
		cout<<"Element is not found"<<endl;

}
