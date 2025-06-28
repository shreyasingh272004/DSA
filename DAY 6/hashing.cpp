#include<bits/stdc++.h>
using namespace std;
int hashh[10000000];//precompute the hash value
int main(){
    cout<<"Enter array size=";
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }//array input
    //hashing
    for(int i=0;i<n;i++){
        hashh[arr[i]]+=1;
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        //fetch
        cout<<hashh[num]<<endl;
    }
    return 0;
}