#include<iostream>
using namespace std;
int fact=1;
void factorial(int n){
    if(n==1){
        return;
    }
    else{
        fact=fact*n;
        n--;
        factorial(n);
    }
}
int main(){
    int n;
    cout<<"Enter n=";
    cin>>n;
    factorial(n);
    cout<<"Factorial of "<<n<<" is "<<fact<<endl;
    return 0;
}