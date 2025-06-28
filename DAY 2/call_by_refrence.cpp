#include<iostream>
using namespace std;
void some(string &s){//call by reference
    // The '&' symbol indicates that 's' is a reference to the original string
    s[0]='T';
    cout<<s;
}
int main(){
    string s="Siya";
    some(s);
    cout<<s<<endl; // This will still print "Siya" because 's' in 'some' is a copy of the original string
    return 0;
}