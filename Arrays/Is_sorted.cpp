#include <iostream>
#include<vector>
using namespace std;
 bool Is_Sorted(vector<int> &nums){
       int n=nums.size();
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1])
            return false;
        }
        return true;
    }
int main() {
    vector<int> nums={12,97,99,100};
    bool ans=Is_Sorted(nums);
    cout<<ans<<endl;
    return 0;
}

//For both sorted and roated array

#include <iostream>
#include<vector>
using namespace std;
 bool Is_Sorted(vector<int> &nums){
       int n=nums.size();
       int dips=0;
        for(int i=1;i<n;i++){
            if(nums[i]<nums[i-1])
            dips++;
        }
        if(nums[n-1]>nums[0]){
            dips++;
        }
        return dips<=1;
    }
int main() {
    vector<int> nums={12,977,99,100};
    bool ans=Is_Sorted(nums);
    cout<<ans<<endl;
    return 0;
}
