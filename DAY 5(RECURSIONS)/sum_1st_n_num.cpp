#include<iostream>
using namespace std;
int i=1,sum=0;
void sum_of_n_num(int n){
    if(i>n){
        return;
    }
    else{
        sum=sum+i;
        i++;
        sum_of_n_num(n);
    }
}
int main(){
    int n;
    cout<<"Enter n=";
    cin>>n;
    sum_of_n_num(n);
    cout<<"Sum of first "<<n<<" natural numbers is "<<sum<<endl;
    return 0;
}