//bubble sort 
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
	for(i=n-2;i>=1;i--){
		for(j=0;j<=i;j++){
			if(p[j]<p[j+1]) goto nxt;
			k=p[j];
			p[j]=p[j+1];
			p[j+1]=k;
			nxt:;
		}
	}
	cout<<"The sorted array is \n";
	for(i=0;i<=n-1;i++){
		cout<<p[i]<<endl;
	}
}
