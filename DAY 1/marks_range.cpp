#include<iostream>
using namespace std;
int main(){
    int marks;
    cin>>marks;
    if(marks<0 || marks>100){
        cout<<"Invalid marks"<<endl;
    }
    else if(marks>=90 && marks<=100){
        cout<<"Grade A"<<endl;
    }
    else if(marks>=80 && marks<90){
        cout<<"Grade B"<<endl;
    }
    else if(marks>=70 && marks<80){
        cout<<"Grade C"<<endl;
    }
    else if(marks>=60 && marks<70){
        cout<<"Grade D"<<endl;
    }
    else if(marks>=50 && marks<60){
        cout<<"Grade E"<<endl;
    }
     else{
        cout<<"Grade F"<<endl;
    }
    return 0;
}