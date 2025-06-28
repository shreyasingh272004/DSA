#include<iostream>
using namespace std;
int n=5,gap=n-1,stars=1;//for 7th pattern
int m=5,gap1=0,stars1=n+4;//for 8th pattern
int t=5,g=n-1,s=1;//9th pattern
int p=5,g1=n-1,s1=1;//9th pattern
int main(){
    
    //for 7th
    //1
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //2
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    //3
    for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    //4
      for(int i=1;i<=5;i++){
        for(int j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
    }
    //5
      for(int i=5;i>=1;i--){
        for(int j=i;j>=1;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    //6
      for(int i=5;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        cout<<endl;
    }
    //7
     for(int i=0;i<n;i++){
        for(int j=0;j<gap;j++){//left spaces
            cout<<" ";
        }
        for(int j=0;j<stars;j++){//star
            cout<<"*";
        }
        cout<<endl;
        gap--;
        stars+=2;
    }cout<<endl;//for space btwn 7th nd 8th code
    //8
    for(int i=0;i<m;i++){
        for(int j=0;j<gap1;j++){//left spaces
            cout<<" ";
        }
        for(int j=0;j<stars1;j++){//star
            cout<<"*";
        }
        cout<<endl;
        gap1++;
        stars1-=2;
    }
    //9
    for(int i=0;i<t;i++){
        for(int j=0;j<g;j++){//left spaces
            cout<<" ";
        }
        for(int j=0;j<s;j++){//star
            cout<<"*";
        }
        cout<<endl;
        g--;
        s+=2;
    }
    
    for(int i=0;i<p;i++){
        for(int j=0;j<g1;j++){//left spaces
            cout<<" ";
        }
        for(int j=0;j<s1;j++){//star
            cout<<"*";
        }
        cout<<endl;
        g1++;
        s1-=2;
    }

    int s=9,n=3;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<s<<" ";
            s--;
        }
        cout<<endl;
    }

    
}

   
 