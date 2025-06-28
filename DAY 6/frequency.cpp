#include<iostream>
using namespace std;
int frequency(int size,int n,int arr[]){
    int cnt=0;
    for(int i=0;i<size;i++){
        if(arr[i]==n){
            cnt++;
        }
    }
    return cnt;
}
int main(){
    int n;
    int arr[10]={1,2,3,4,5,8,4,4,4,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Enter the number to find frequency: ";
    cin>>n;
    int result = frequency(size,n,arr);
    cout<<"Frequency of "<<n<<" is: "<<result<<endl;
    return 0;
}