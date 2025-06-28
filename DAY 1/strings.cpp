#include<iostream>
using namespace std;
int main(){
    string s="shreya";
    int len=s.size();//6
    cout<<len;//prints length of string s
    s[1]='a';//here a is a character so it must be enclosed within single invertd commas only
    cout<<s;
    return 0;
}