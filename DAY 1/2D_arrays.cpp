#include<iostream>
using namespace std;
int main(){
    int arr[3][5];//2D array declaration
    arr[1][3]=78;//assigning 78 to this index
    cout<<arr[1][3];//78 will be printed
    cout<<arr[1][4];//a random value is printed which was stored as a garbage value bcz user had not assigned any value for this index
    return 0;
   
}