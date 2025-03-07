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