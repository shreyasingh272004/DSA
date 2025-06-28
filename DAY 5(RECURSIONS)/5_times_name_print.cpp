#include<iostream>
using namespace std;
    void printName(int n){
      if(n==5){//base case
        return;
      }
      else{
        cout<<"Shreya"<<endl;
        n++;
        printName(n);
    }
}
    int main(){
        printName(0);
        return 0;
    }

