#include<iostream>
using namespace std;
void printname(){//void function i.e. no return type
    cout<<"Hey Shreya"<<endl;
}

void print(string name1){//parameterized function
    cout<<"Hello "<<name1<<endl;
}

int main(){
    string name,name1;
    printname();//Function calling
    cout<<"Enter your name: ";//for user input
    cin>>name1;
    print(name1);//Function calling
    return 0;
}


