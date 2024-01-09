//binary search
#include <iostream>
using namespace std;
int p[100],g=0;
int binary(int k,int n);
int main(){
	int negate,m,k,i,n;
	cout<<"Enter the length of an array";
	cin>>n;
	cout<<"Enter the sorted values\n";
	for(i=0;i<n-1;i++){
		cin>>p[i];
	}
	cout<<"Enter the vlue to search";
	cin>>k;
	m=binary(k,n);
	if(m==k)
	cout<<"value " <<m<<" is found";
	else
		cout<<"value is not found\n";
}

int binary(int k,int n){
	int l=0,m,v=n;
	while(v>=l){
		m=(v+l)/2;
		if(k==p[m]){
			g=p[m];
			break;
		}
		else
		{
			if(k>p[m])
				l=m+1;
			else
				v=m-1;
		}
	}
	return(g);
}
