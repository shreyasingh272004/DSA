#include<iostream>//1D arrays
using namespace std;
int main(){
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3]=arr[3]+10;//adding 10 to 3rd element of array
    cout<<arr[3];
    return 0;
}