//brute -1
#include <iostream>
#include <vector>
using namespace std;
 string twoSum(vector<int>& nums, int target) {
        int n=nums.size();
      vector<int> result;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            
            if(nums[i]+nums[j]==target){
             
             return "yes";
            }
        }
    }
    return "No";
    }
int main() {
    vector<int> arr = {2, 6, 5, 19, 11};
    int target = 14;
    string ans = twoSum( arr, target);
    cout << "This is the answer for variant 1: "<<ans << endl;
    
    return 0;
}

//brute-2
#include <iostream>
#include <vector>
using namespace std;
 vector<int> twoSum2(vector<int>& nums, int target) {
        int n=nums.size();
      vector<int> result;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            
            if(nums[i]+nums[j]==target){
             result.push_back(i);
             result.push_back(j);
             return result;
            }
        }
    }
    return {-1,-1};
    }
int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    vector<int> ans = twoSum2( arr, target);
    cout << "This is the answer for variant 2: [" << ans[0] << ", "
         << ans[1] << "]" << endl;
    
    return 0;
}
//better
/*class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            int n=nums.size();
          vector<int> result;
           unordered_map <int,int> mpp;
           for(int i=0;i<n;i++){
            int a = nums[i];
            int more=target -a;
            if(mpp.find(more)!=mpp.end()){
                return {mpp[more],i};
            }
            mpp[a]=i;
           }
           return {-1,-1};
        }
    };*/

    //optimal for variant 1
    // Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 string twoSum(vector<int>& nums, int target) {
        int n=nums.size();
         sort(nums.begin(), nums.end());
      int left=0,right=n-1;
      while(left<right){
          int sum=nums[right]+nums[left];
           if (sum == target) {
            return "YES";
        }
          else if(sum<target) left++;
          else  right--;
      }
    return "No";
    }
int main() {
    vector<int> arr =  {2, 6, 5, 8, 11};
    int target = 14;
    
    string ans = twoSum( arr, target);
    cout << "This is the answer for variant 1: "<<ans << endl;
    
    return 0;
}