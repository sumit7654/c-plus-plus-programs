//selection sort 
#include<iostream>
#define max 100
using namespace std;
int main(){
	int p[max],k,n,i,j,m,x;
	cout<<"How many values are there ?" ; 
	cin>>n;
	cout<<"Enter "<<n<<"values \n";
	for(i=0;i<=n-1;i++){
		cin>>p[i];
	}
	for(i=0;i<=n-2;i++){
		
			k=p[i];
			m=i;
			for(j=i+1;j<=n-1;j++){
				if(k>p[j]){
					k=p[j];
					m=j;
				}
			}
			x=p[i];
			p[i]=p[m];
			p[m]=x;
	}
	cout<<"The ascending order of the element entered is : \n";
	for(i=0;i<=n-1;i++){
		cout<<p[i]<<"\t"<<endl;
	}
}
