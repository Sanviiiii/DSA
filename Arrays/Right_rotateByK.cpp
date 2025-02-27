#include <iostream>
using namespace std;
#include <vector>
void Reverse(vector<int>& arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void  right(vector<int>& arr,int n,int k){
    k=k%n;
    Reverse(arr,0,n-k-1);
    Reverse(arr,n-k,n-1);
    Reverse(arr,0,n-1);
}
int main() {
 vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
 right(arr,n,k);
  cout << "After Rotating the k elements to right ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
    return 0;
}