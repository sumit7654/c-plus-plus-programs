#include<stdio.h>
int tower(int n,char beg, char aux,char end);
int main(){
	int n;
	char a,b,c;
	printf("Enter the number of disk\n");
	scanf("%d",&n);
	printf("Tower of hanoi %d disk:\n" , n);
	printf("\n");
	tower(n,'a','b','c');
}
int tower(int n,char beg,char aux,char end){
	if(n<=0)
	printf("illegal entry");
	else if(n==1)
	printf("move disk from %c to %c\n",beg,end);
	else
	{
		tower(n-1,beg ,end ,aux);
		tower(1,beg,aux,end);
		tower(n-1,aux,beg,end);
	}
}
