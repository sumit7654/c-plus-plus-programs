#include<iostream>
using namespace std;
int main(){
    int arr[100],search,n,i;
    cout<<"Enter the size of an array"<<endl;
    cin>>n;
    cout<<"Enter all the element of an array"<<endl;
    for( i=0;i<n;i++){
        cin>>arr[i];
    }
    for( i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"Enter the number to search"<<endl;
    cin>>search;
    for(i=0;i<n;i++){
        if(arr[i]==search){
            cout<<"your number is found at " <<i+1<< " position"<<endl;
            break;
        }
    }
    if(arr[i]!=search){
        cout<<"Your number is not found"<<endl;
    }
}