#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <process.h>
using namespace std;
class bank{
//decalaration of a data member
public:
char name[20];
char account_type[20];
int account_number;
int balance;
//member functions of the class Bank
//initilize function to initialize data members
void initialize(){
    cout<<"\n Enter account holder name ";
    gets(name);
    cout<<"\nEnter Account type : ";
    gets(account_type);
    cout<<"\nEnter account number : ";
    cin>>account_number;
    cout<<"Enter balance to deposit : ";
    cin>>balance;
}
//deposit() function to deposit amount in account
void deposit(){
    int bal;
    cout<<"\nEnter the amount to deposit : ";
    cin>>bal;
    balance+=bal;
    cout<<"\nAmount deposited successfuly\n Your New Balance : "<<balance;
}
//check()functon to withdrw amount and check remaining balance
void check(){
    int bal;
    cout<<"\n YOur balance : "<<balance <<"\nEnter amount to withdraw: ";
    cin>>bal;
    if(bal<=balance){
        balance-=bal;
        cout<<"\nRemaining Balance :"<<balance;
    }
    else
    exit(0);
}
//display function to display user information
void display(){
    cout<<"\nName : ";
    puts(name);
    cout<<"\nBalance : "<<balance;
}
};
int main(){
    int i;
    bank bk;
    bk.initialize();
    cout<<"\n 1. Your information \n2 . Deposit \n3. withdraw\nEnter your choice n";
    cin>>i;
    if(i==1){
        bk.display();
    }
    else if(i==2){
        bk.deposit();
    }
    else if(i==3){
        bk.check();
    }
    getch();
}