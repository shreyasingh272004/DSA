#include<iostream>
#include<algorithm>
using namespace std;
void reversearray(int arr[],int i){
    if(i>=n/2){
        return;
    }
    else{
        swap(arr[i], arr[n-i-1]); // Swap the elements at the current index and its corresponding index from the end
        reversearray(arr, i + 1); // Recursive call with the next index
    }
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeOf(arr[])/sizeOf(arr[0]);
    reversearray(arr, 0); // Start reversing from the first index
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}