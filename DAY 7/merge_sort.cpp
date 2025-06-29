#include<iostream>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    int size = high - low + 1;
    int* temp = new int[size];//* shows that temp is a pointer here that stores the address of the element
    int left = low;
    int right = mid + 1;
    int k = 0;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right])
        {
            temp[k++] = arr[left++];
        }
        else 
        {
            temp[k++] = arr[right++];
        }
    }
    while (left <= mid){
        temp[k++] = arr[left++];
    } 
    while (right <= high){
        temp[k++] = arr[right++];
    } 
    for (int i = low; i <= high; i++){
         arr[i] = temp[i - low];
    }
    //delete[] temp;
}

void merge_sort(int arr[], int low, int high) {
    if (low >= high){
        return;
    }
    else{
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low, mid, high);
    }
}

int main() {
    cout << "Enter array size=";
    int n;
    cin >> n;
    cout << "Enter array elements=";
    int* arr = new int[n];//* is pointer to store address of element
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    } 
    merge_sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } 
    //delete[] arr;
    return 0;
}