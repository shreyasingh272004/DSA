#include<iostream>
using namespace std;



void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter array size=";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements to be sorted=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        selection_sort(arr,n);
        cout<<"Sorted array is=";
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        return 0;
}

