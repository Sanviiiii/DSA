using namespace std;
#include <iostream>
 void selectionSort(int arr[] ,int n) {
       
        for(int i=0;i<=n-2;i++){
            int mini=i;
            for(int j=i;j<=n-1;j++){
                if(arr[j]<arr[mini]){
                    mini=j;
                }
            }
            int temp = arr[mini];
            arr[mini]=arr[i];
            arr[i]=temp;
        }
        
    }
int main() {
    int arr[] = {10, 5, 1,3,9,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Before Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    selectionSort(arr, n);
    cout<<endl<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}