#include <bits/stdc++.h>
using namespace std;

pair<int, int> searchRange(vector<int>& nums, int target) {
    int n = nums.size();
    int first = -1, last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) first = i;
            last = i;
        }
    }
    return {first, last};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8,8, 10};
    int target = 8;

    pair<int, int> result = searchRange(nums, target);
    
    cout << "First Occurrence: " << result.first << ", Last Occurrence: " << result.second << endl;
    
    return 0;
}

//optimised solution using Lb and ub
class Solution {
    public:
        int lower_bound_index(const vector<int> &nums,int target){
        int n=nums.size();
        int low=0,high=n-1;
        int ans=n;
        while(low<=high){
           int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    int upper_bound_index(const vector<int> &nums,int target){
        int n=nums.size();
        
        int ans=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
       
        return ans;
    }
        vector<int> searchRange(vector<int>& nums, int target) {
           int n=nums.size();
           int lb=lower_bound_index(nums,target);
           if(lb==n || nums[lb]!= target) return{-1,-1};
           else return {lb,upper_bound_index(nums,target)-1};
        }
    };

//optimised solution using Binary Search

