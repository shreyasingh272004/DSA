#include<iostream>
using namespace std;
int l;
int largest_element(int arr[],int n){
    int max1,max2;
    if(arr[0]>arr[1]){
        max1=arr[0];
        max2=arr[1];
    }
    else{
        max2=arr[0];
        max1=arr[1];
    }
    for(int i=2;i<l;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max1){
            max2=arr[i];
        }
    }
    cout<<"MAX1="<<max1<<endl;
    cout<<"MAX2="<<max2<<endl;
}

int main(){
    int n;
    cout<<"Enter n=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    l=sizeof(arr)/sizeof(arr[0]);
    largest_element(arr,n);
    return 0;
}