#include<iostream>
using namespace std;
void reverseString(int i){
    if(i>=n/2){
        return true;
    }
    else if{s[i]!=s[n-i-1]}{
        return false;
    }
    else{
        return reverseString(i + 1); // Recursive call with the next index
    }
}
int main(){
    string s="madam";
    reverseString(0); // Start checking from the first index
    if(reverseString()) {
        cout << "The string is a palindrome." << endl; // Output if the string is a palindrome
    } else {
        cout << "The string is not a palindrome." << endl; // Output if the string is not a palindrome
    }
}

