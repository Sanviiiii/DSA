//iterative 
int search(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0,high=n-1;
    while(low<=high){
      int mid=(low+high)/2;
      if(target==nums[mid])  return mid;
      else if(target > nums[mid]) low=mid+1;
      else high=mid-1;
    }
    return -1;
}

//Recursive
#include <bits/stdc++.h>
using namespace std;
int Bs(vector<int> a, int low,int high,int target){
    if(low > high) return -1;
    int mid=(low+high)/2;
        if(target==a[mid]) return mid;
        else if(target>a[mid]) return Bs(a,mid+1,high, target);
        else return Bs(a,low,mid-1, target);
}
int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 17;
    int ind = Bs(a,0,a.size()-1, target);
    if (ind == -1) cout << "The target is not present." << endl;
    else cout << "The target is at index: "
                  << ind << endl;
    return 0;
}