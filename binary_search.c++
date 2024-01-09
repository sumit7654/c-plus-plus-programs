//This code for binary search
#include <iostream>
using namespace std;
int main(){
    int arr[100],search,n,mid,beg,end,i,j;
    cout<<"Enter the number of element"<<endl;
    cin>>n;
    cout<<"Enter all value of element"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    //This is for sorting by bubble sort
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
              int  temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"Your sorted number is "<<endl;
    for(i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    cout<<"Enter the number for search"<<endl;
    cin>>search;

    //main code start here
    beg=0;
    end=n-1;
    while(beg<=end){
        mid=beg+(end-beg)/2;
        if(arr[mid]==search){
            cout<<"Your number is found at position"<< mid + 1<<endl;
            return 0;
        }
        else if (arr[mid]<search){
            beg=mid+1;
        }
        else{
            end=mid-1;
        }
    }
   cout<<"Your number is not found "<<endl;
   return 0;
}