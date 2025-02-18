using namespace std;
#include <iostream>
   void insertionSort(int arr[],int n) {
   
for(int i=0;i<n-1;i++){
  int j=i;
  while(j>0 && arr[j-1]>arr[j]){
      swap(arr[j],arr[j-1]);
      j--;
  }
}
    }
int main() {
    int arr[] = {10, 5, 1,3,9,5,9,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    insertionSort(arr, n);
    cout<<endl<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}