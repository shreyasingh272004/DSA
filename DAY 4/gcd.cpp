#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    cout<<"First number: "<<n1<<endl;
    cout<<"Second number: "<<n2<<endl;
    int gcd = 1;
    for(int i=1;i<=n1 && i<=n2;i++){
        if(n1%i==0 && n2%i==0){
            gcd=i;
        }
    }
    cout<<"GCD of the two numbers="<<gcd<<endl;
}