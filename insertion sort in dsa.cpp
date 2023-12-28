//Insertion sort
#include<iostream>
using namespace std;
int main(){
	int p[100],k,n,i,j;
	cout<<"How many values are there ?" ; 
	cin>>n;
	cout<<"Enter "<<n<<"values \n";
	for(i=0;i<=n-1;i++){
		cin>>p[i];
	}
	for(i=1;i<=n-1;i++){
		for(j=i;j>0;j--){
			if(p[j]<p[j-1]){
			
			k=p[j];
			p[j]=p[j-1];
			p[j-1]=k;
			}
		}
	}
	cout<<"The sorted array is \n";
	for(i=0;i<=n-1;i++){
		cout<<p[i]<<"\t"<<endl;
	}
}
