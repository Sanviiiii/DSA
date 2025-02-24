//optimized
#include <iostream>
#include<vector>
using namespace std;
void solve(vector<int> arr){
   int n=arr.size();
   int temp=arr[0];
    for(int i=0;i<n-1;i++){
        arr[i]=arr[i+1];
        
    }
    arr[n-1]=temp;
    cout<<endl<<"array after one left shift"<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
}

int main() {
 vector <int> arr={1,23,2,312,4};
 int n=arr.size();
 cout<<"actual array"<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
 solve(arr);
 
    return 0;
}

//Bruteforce approach
/*
#include <iostream>
#include<vector>
using namespace std;
void solve(vector<int> &arr){
   int n=arr.size();
vector<int> temp(n);
for(int i=1;i<n;i++){
    temp[i-1]=arr[i];
}
temp[n-1]=arr[0];

cout << "\nRotated array:" << endl;
for(int i=0;i<n;i++){
    cout<<temp[i]<<" ";
}
}

int main() {
 vector <int> arr={1,23,2,312,4};
 int n=arr.size();
 cout<<"actual array"<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
 solve(arr);
 
    return 0;
}
*/













