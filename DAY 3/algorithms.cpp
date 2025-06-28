#include<bits/stdc++.h>
using namespace std;


bool comp(pair<int,int> p1, pair<int,int> p2){
        if(p1.second<p2.second) return true;
        return false;
        if(p1.first>p2.first)return true;
        return false;
    }
   
void explainExtra(){
    //sort(a,a+n);
    //sort(v.begin(),v.end());
    //sort(a,a+n,greater<int>);
    int n=3;
    pair<int,int> a[]={{1,2},{2,1},{4,1}};
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    }
    sort(a,a+n,comp);
}
int main(){
    explainExtra();
    return 0;
}