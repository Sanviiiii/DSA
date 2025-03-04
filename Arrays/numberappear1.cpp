//Brute 
#include <iostream>
using namespace std;
#include<vector>
int NumAppear1(vector<int> &nums){
    int n=nums.size();
    for(int i=0;i<n;i++){
        int num=nums[i];
        int count=0;
        for(int j=0;j<n;j++){
            if(nums[j]==num){
                count++;
            }
        }
       if(count==1) return num; 
    }
    return -1;
}
int main() {
vector<int>nums={1,1,2,2,5,3,3};
int ans=NumAppear1(nums);
cout<<ans<<endl;

    return 0;
}

//optimal -1 - Using hashing
#include <iostream>
using namespace std;
#include<vector>
int NumAppear1(vector<int> &nums){
    int n=nums.size();
    int maxi=nums[0];
    for(int i=0;i<n;i++){
        maxi=max(maxi,nums[i]);
    }
    vector<int> hash(n+1,0);
    for(int i=0;i<n;i++){
        hash[nums[i]]++;
    }
    
    for(int i=0;i<n;i++){
        if(hash[nums[i]]==1) return nums[i];
    }
  
    return -1;
}
int main() {
vector<int>nums={1,1,2,2,5,3,3};
int ans=NumAppear1(nums);
cout<<ans<<endl;

    return 0;
}
//optimal-3-map

#include <iostream>
using namespace std;
#include<vector>
#include <map>
int NumAppear1(vector<int> &nums){
    int n=nums.size();
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it : mpp){
        if(it.second==1)
        return it.first;
    }
  
    return -1;
}
int main() {
vector<int>nums={1,1,2,2,5,89,5,3,3};
int ans=NumAppear1(nums);
cout<<ans<<endl;

    return 0;
}