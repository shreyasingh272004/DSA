#include<iostream>
using namespace std;
//int n3;if declared here then can be accesed in main function firectly
int sum( int n1, int n2){//function to return nd calc sum
    int n3=n1+n2;
    return n3;//return statment
}
int main(){
    int n1,n2;
    cout<<"Enter n1=";
    cin>>n1;
    cout<<"Enter n2=";
    cin>>n2;
    sum(n1,n2);//function calling. from here code terminates to line 3(int res can be written here only)
    //int res = n3; //function calling and storing result in res if n3 declared gloabally
    int res = sum(n1,n2); //function calling and storing result in res
    cout<<"sum="<<sum(n1,n2)<<endl; //function calling and printing result
    cout<<"Sum of two numbers is="<<res;
    //cout<<sum(n1,n2); //directly calling function
    return 0;
}