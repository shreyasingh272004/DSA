#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
string reverseWords(string s){
    int n=s.length();
    string ans="";

    reverse(s.begin(),s.end());

    for(int i=0;i<n;i++){
        string word="";
        while(i<n && s[i]!=' '){
            word+=s[i];
            i++;
        }
        reverse(word.begin(),word.end());
        if(word.length()>0){
            ans+=" "+word;
        }
    }
    return ans.substr(1); // Remove the leading space
}
int main(){
    string s="Hello World";
    string reversedString = reverseWords(s); // Call the function to reverse the words in the string
    cout << reversedString << endl; // Output the reversed string
    return 0;
}