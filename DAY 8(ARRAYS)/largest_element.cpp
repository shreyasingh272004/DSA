#include<iostream>
using namespace std;

int largest_element(int arr[],int n){
    int l=arr[0];
    for(int i=1;i<n;i++){
       if(arr[i]>l){
        l=arr[i];
       }
    }
    cout<<"largest element in the array is="<<l<<endl;
}
int main(){
    int n,l;
    cout<<"Enter array size=";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    largest_element(arr,n);
}