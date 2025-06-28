#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the string-";
    cin>>s;


    //pre compute
    int hashh[26]={0};
    for(int i=0;i<s.size();i++){
        hashh[s[i]-'a']++;
    }
    int q;
    cout<<"Enter the queries-";
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<<hashh[c-'a']<<endl; 
    }
    return 0;
}