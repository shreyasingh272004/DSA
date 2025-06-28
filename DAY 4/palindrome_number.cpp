#include<iostream>
using namespace std;
int main(){
    int num,rev=0;
    cout << "Enter a number: ";
    cin >> num;
    int original_num=num;
    while(num>0){
        int rem=num%10;
        rev=(rev*10)+rem;
        num=num/10;
    }
    cout << "Reversed number is: " << rev << endl;
    if(rev==original_num){
            cout<<original_num<<" is a palindrome number."<<endl;
    }
    else{
            cout<<original_num<<" is not a palindrome number."<<endl;
        }
}