#include<iostream>
using namespace std;

void fibonacci(int n,int a=0,int b=1,int sum=0){
    if(n<=1){
        return;
    }
    else{
        sum=sum+a+b;
        cout<<sum<<" ";
        fibonacci(n-1, b, sum);
    }
}
int main(){
    int n;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci series: 0 1 ";
    fibonacci(n);
    return 0;
}
