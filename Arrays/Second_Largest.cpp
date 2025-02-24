#include<vector>
#include <climits>
#include <iostream>
using namespace std;
int Slargest(vector<int> &arr){
   int n=arr.size();
       if(n==0 || n==1) return -1;
       int largest=INT_MIN,second_large=INT_MIN;
       for(int i=0;i<n;i++){
           if(arr[i]>largest){
               largest=arr[i];
           }
       }
       
for(int i=0;i<n;i++){
    if(arr[i]>second_large && arr[i]!=largest ){
        second_large=arr[i];
    }
}
return second_large;
}
int main() {
    vector<int> arr={11};
    cout<<"the second largest element is "<<Slargest(arr)<<endl;
    return 0;
}