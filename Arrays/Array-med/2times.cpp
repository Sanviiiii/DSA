//Brute
#include<map>
#include<vector>
using namespace std;
#include<iostream>
int majorityElement(vector<int> v) {

    //size of the given array:
    int n = v.size();

    for (int i = 0; i < n; i++) {
        //selected element is v[i]
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            // counting the frequency of v[i]
            if (v[j] == v[i]) {
                cnt++;
            }
        }

        // check if frquency is greater than n/2:
        if (cnt > (n / 2))
            return v[i];
    }

    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}

//Better

int majorityElement(vector<int>& nums) {
    int n=nums.size();
   map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[nums[i]]++;
    }
    for(auto it: mpp){
        if(it.second>(n/2)){
            return it.first;
        }
    }
    return -1;
}

//optimal-Moore's voting algorithm
int majorityElement(vector<int>& nums) {
    int n=nums.size();
    int cnt=0;
    int el;
    for(int i=0;i<n;i++){
        if(cnt==0){
            el=nums[i];
            cnt++;
        }
        else if(nums[i]==el) cnt++;
        else cnt--;
    }
    int cnt1=0;
    for(int i=0;i<n;i++){
       if(nums[i]==el){
        cnt1++;
       }
    }
    if(cnt1>(n/2))
    {
        return el;
    }
    return -1;
}