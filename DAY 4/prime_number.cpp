#include<iostream>
using namespace std;
int main(){
    int num,cnt=0;
    cout << "Enter a number: ";
    cin >> num;
    if(num==0 || num==1){
        cout << num << " is not a prime number." << endl;
        return 0;
    }
    
    else{
        for(int i=1;i<=num;i++){
            if(num%i==0){
                cnt++;
            }
        }
        if(cnt==2){
            cout << num << " is a prime number." << endl;
        } else {
            cout << num << " is not a prime number." << endl;
        }
    }
}