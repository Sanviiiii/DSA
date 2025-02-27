//Brute force
#include <iostream>
#include<vector>
using namespace std;
void leftRotateBYk(int arr[],int n,int d){
    d=d%n;
    int temp[d];
   for(int i=0;i<d;i++){
       temp[i]=arr[i];
   }
   for(int i=d;i<n;i++){
       arr[i-d]=arr[i];
   }
   
   for(int i=n-d;i<n;i++){
       arr[i]=temp[i-(n-d)];
       
   }
}
int main() {
    int n = 7;
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int k = 2;
  leftRotateBYk(arr, n, k);
  cout << "After Rotating the elements to left " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
    return 0;
}

//optimal
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
void  left(vector<int>& arr,int n,int k){
    Reverse(arr,0,k-1);
    Reverse(arr,k,n-1);
    Reverse(arr,0,n-1);
}
int main() {
 vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
  int n = 7;
  int k = 2;
  left(arr,n,k);
  cout << "After Rotating the k elements to left ";
  for (int i = 0; i < n; i++)
    cout << arr[i] << " ";
  cout << endl;
    return 0;
}