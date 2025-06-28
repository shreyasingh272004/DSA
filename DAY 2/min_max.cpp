#include<iostream>
using namespace std;
int comp(int n1,int n2){
    if(n1>n2){
        cout<<n1<<" is maximum and "<<n2<<" is minimum"<<endl;
    }
    else{
        cout<<n2<<" is maximum and "<<n1<<" is minimum"<<endl;
    }
}
int main(){
    int n1,n2;
    cout<<"Enter n1=";
    cin>>n1;
    cout<<"Enter n2=";
    cin>>n2;
    comp(n1,n2);
    return 0; 
}