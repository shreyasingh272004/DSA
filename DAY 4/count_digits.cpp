#include<iostream>
using namespace std;
int main(){
    int count=0;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    while(n>0){
        int rem=n%10;
        count++;
        n=n/10;
    }
    cout << "The number of digits is: " << count << endl;
    return 0;
}