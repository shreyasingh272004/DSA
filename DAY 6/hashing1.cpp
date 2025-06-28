#include<bits/stdc++.h>
using namespace std;
int hashh[10000000]; // Precomputed hash value array size i.e 10^7
int main(){
    int n;//array size
    cout<<"Enter array size=";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){//array input
        cin>>arr[i];
    }

    //precompute the hash value
    //int hashh[13]={0}; // Assuming the range of numbers is 0 to 12(this line can be replaced by line 3 if declared globally)
    for(int i=0;i<n;i++){
        hashh[arr[i]]+=1;
    }

    int q;//number of queries
    cout<<"Enter number of queries=";
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        //fetch
        cout<<hashh[number]<<endl;
    }
    return 0;
}