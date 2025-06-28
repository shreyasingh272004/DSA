#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age:";
    cin>>age;
    //cout<<age;//printing the age entered by user
    //now checking if adult or not
    if(age>=18){
        cout<<"You are an adult."<<endl;
    }
    else{
        cout<<"You are not an adult."<<endl;
    }
    return 0;
    }
    

