//brute

#include <bits/stdc++.h>
using namespace std;

 int getLongestSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        int len=0;
        for(int i=0;i<n;i++){
           
            for(int j=0;j<n;j++){
                int s=0;
                for(int k=i;k<=j;k++){
                    s+=arr[k]; 
                }
                 if(s==k){
                len=max(len, j-i+1);
                }
            }
        }
        return len;
    }
int main()
{
    
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

//optimized brute
#include <bits/stdc++.h>
using namespace std;

 int getLongestSubarray(vector<int>& arr, int k) {
        int n=arr.size();
        int len=0;
        for(int i=0;i<n;i++){
            int s=0;
            for(int j=0;j<n;j++){
                
                
                   s+=arr[j]; 
                
                if(s==k){
                len=max(len, j-i+1);
                }
            }
        }
        return len;
    }
int main()
{
    
    vector<int> a = {2, 3, 5, 1, 9};
    long long k = 10;
    int len = getLongestSubarray(a, k);
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}

//optimsl
int longestSubarray(vector<int>& arr, long long k) {
    map<long long ,int> preSumMap;
    long long sum=0;
    int maxLen=0;
    for(int i=0;i<arr.size();i++){
        sum+=arr[i];
        if(sum==k){
            maxLen=max(maxLen,i+1);
        }
        long long rem=sum-k;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(sum)==preSumMap.end()){
    preSumMap[sum]=i;
        }
    }
    return maxLen;
}


//
class Solution {
    public:
        int subarraySum(vector<int>& nums, int k) {
            int left=0,right=0;
             if (nums.empty()) return 0;
            long long sum=nums[0];
            int maxLen=0;
            int n=nums.size();
            while(right<n){
                while(left<=right && sum>k){
                    sum-=nums[left];
                    left++;
                }
                if(sum==k){
                    maxLen=max(maxLen,right-left+1);
                }
                right++;
                if(right<n) sum+=nums[right];
            }
            return maxLen;
        }
    };  