#include<iostream>
using namespace std;
void reverseArray(int arr[], int start, int end) {
    if (start >= end){
     return;
    }
    else{ // Base case: if the start index is greater than or equal to the end index, return
    swap(arr[start], arr[end]); // Swap the elements at the start and end indices
    reverseArray(arr, start + 1, end - 1); 
    }// Recursive call with updated indices
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/ sizeof(arr[0]); // Calculate the number of elements in the array
    reverseArray(arr, 0, n - 1); // Call the function to reverse the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print the reversed array
    }
    return 0;
}