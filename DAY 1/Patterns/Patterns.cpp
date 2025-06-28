#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=5;i++){//1
        for(int j=1;j<=5;j++){
        cout<<"*";
        }
        cout<<endl;
        }
    for(int i=1;i<=5;i++){//2
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1;i<=5;i++){//3
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
     for(int i=1;i<=5;i++){//4
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
     for(int i=1;i<=5;i++){//5
        for(int j=5;j>=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
     for(int i=5;i>=1;i--){//6
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
     for(int i=1;i<=5;i++){//11
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
    }
    int k=1;
     for(int i=1;i<=5;i++){//13
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }

    }
