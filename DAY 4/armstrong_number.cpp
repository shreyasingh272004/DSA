#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,num,count=0,sum=0;
    cout << "Enter a number: ";
    cin >> n;
    num = n;
    while(n>0){
        int rem=n%10;
        count++;
        n = n / 10;   
    }
    cout<<"Total digits="<<count<<endl;
    //return count;
    n=num;
    while(n>0){
        int r=n%10;
        sum=sum+round(pow(r,count));//using jst pow(r,count) will give result in double that's why we're using round otherwise it will give result using int only which will be 152
        n=n/10;
    }
   cout<<"sum of digits="<<sum<<endl;
   if(sum==num){
    cout<<num<<" is an Armstrong number"<<endl;
   }
   else{
    cout<<num<<" is not an Armstrong number"<<endl;
}
}
