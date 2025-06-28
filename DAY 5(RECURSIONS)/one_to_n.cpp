#include<iostream>
using namespace std;
int i=0;//for i=0 i+1 will be printed
void print(int n){
    if(i>=n){
        return;
    }
    else{
        cout<<(i+1)<<endl;//here i+1 is used to print from 1 to n
        i++;
        print(n);
    }
}
int main(){
    int n;
    cout<<"Enter n=";
    cin>>n;
    print(n); // n will not be included in the output
}