#include<iostream>
using namespace std;

int duplicate_elements(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]!=arr[j]){
                
            }
            else{
                for(int i=0;i<n;i++){
                    cout<<arr[i];
                }
            }
        }
    }
}
int main(){
    int n;
    cout<<"Enter array size=";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    duplicate_elements(arr,n);
    return 0;
}