#include<iostream>
using namespace std;
int i=1;
void print(int n){
    if(i>n){
        return;
    }
    else{
        cout<<n<<endl;
        n--;
        print(n);
    }
}
int main(){
    int n;
    cout<<"Enter n=";
    cin>>n;
    print(n); // n will be included in the output
    return 0;
}