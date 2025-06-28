#include<iostream>
using namespace std;
int i=1;
void print(int n){
    if(i>=n){//base condition
        return;
    }
    else{
        cout<<i<<endl;
        i++;
        print(n);
    }
}
int main(){
    int n;
    cout<<"enter n=";
    cin>>n;
    print(n+1);//n+1 would also include n in the output
    return 0;
}