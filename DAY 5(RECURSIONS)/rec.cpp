#include<iostream>
using namespace std;
    int cnt=0;
    void f(){
        if(cnt==4){
            return;
        }
            cout<<cnt<<endl;
            cnt++;
            f();
        }
    int main(){
        f();
        return 0;
    }
