#include<iostream>
using namespace std;

int sorted_array(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1]){
        }
        else{
            return false;
        }
    }
    return true;
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
    if(sorted_array(arr,n)){
        cout<<"Array is sorted";
    }
    else{
        cout<<"Array is not sorted";
    }
    
    return 0;
}