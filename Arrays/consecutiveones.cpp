#include <iostream>
#include<vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt=0;
       int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                cnt++;
                maxi=max(maxi,cnt);
            }
            else{
                cnt=0;
            }
        }
        return maxi;
    }
int main(){
    vector <int> nums={1,1,1,0,1,1,1,1,0};
    int c1=findMaxConsecutiveOnes(nums);
    cout<<"the longest consecutive ones are "<<c1;
    return 0;
}