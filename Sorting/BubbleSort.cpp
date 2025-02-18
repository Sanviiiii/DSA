using namespace std;
#include <iostream>
    void bubbleSort(int arr[],int n) {
      
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
    /*
    void bubbleSort(int arr[],int n) {
      
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
    */
int main() {
    int arr[] = {10, 5, 1,3,9,5,9,90};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    bubbleSort(arr, n);
    cout<<endl<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

//Reducing Complexity
using namespace std;
#include <iostream>
    void bubbleSort(int arr[],int n) {
      
        for(int i=n-1;i>=0;i--){
             int didSwap = 0;
            for(int j=0;j<=i-1;j++){
                if(arr[j]>arr[j+1]){
                    swap(arr[j],arr[j+1]);
                     didSwap = 1;
                }
            }
             if (didSwap == 0) {
            break;
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
    bubbleSort(arr, n);
    cout<<endl<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}