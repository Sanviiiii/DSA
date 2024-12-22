#include <bits/stdc++.h>
using namespace std;
void printArr(int arr[], int n) {
    cout << "Reversed array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}


void rev_Array(int arr[], int start, int end) {
    if (start < end) {
        swap(arr[start], arr[end]); 
        rev_Array(arr, start + 1, end - 1); 
    }
}

int main() {
    int n = 5; 
    int arr[] = {3, 2, 1, 7, 9}; 

   
    rev_Array(arr, 0, n - 1);

   
    printArr(arr, n);

    return 0;
}