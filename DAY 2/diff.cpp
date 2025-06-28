#include<iostream>
using namespace std;
int diff(int a,int b){
    int c;
    c=a-b; //difference of a and b
    return c;
}
void smthng(int num){//call by value
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

int main(){
    int a,b;
    cout<<"Enter a=";
    cin>>a;
    cout<<"Enter b=";
    cin>>b;
    diff(a,b);
    int res=diff(a,b);
    cout<<"Difference is= "<<res<<endl;
    int num=10;//call by value
    smthng(num);
    cout<<num<<endl;
    return 0;
}
