#include <iostream>
#include<vector>
using namespace std;
vector <int> moveZeros(vector <int> &arr){
    vector<int> temp;
    int n=arr.size(); 
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
        int nz=temp.size();
        for(int i=0;i<nz;i++){
            arr[i]=temp[i];
        }
        for(int i=nz;i<n;i++){
            arr[i]=0;
        }
    return arr;
}
int main() {
 vector <int> arr={1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
 int n=arr.size();
 cout<<"actual array"<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
 cout<<'\n';
 vector<int> ans=moveZeros(arr);
 cout<<"After moving"<<endl;
 for(auto &it : ans){
     cout<<it<<" ";
 }
 cout<<endl;
 
    return 0;
}

//Optimized solution
#include <iostream>
#include<vector>
using namespace std;
vector <int> moveZeros(vector <int> &arr){
    int n=arr.size();
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1) return arr;
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
    }    
}
return arr;
}
int main() {
 vector <int> arr={1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
 int n=arr.size();
 cout<<"actual array"<<endl;
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }
 cout<<'\n';
 vector<int> ans=moveZeros(arr);
 cout<<"After moving"<<endl;
 for(auto &it : ans){
     cout<<it<<" ";
 }
 cout<<endl;
    return 0;
}
















