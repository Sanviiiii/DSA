#include <bits/stdc++.h>
using namespace std;

int findKRotation(vector<int>& nums) {
        int low = 0, high = nums.size() - 1;

        while (low <high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] > nums[high]) {
                low = mid + 1;
            } 

            else {
                high = mid;
            }
        }
        
        return low; 
    }
    int main()
{
    vector<int> arr = {4, 5, 6, 7, 0, 1, 2, 3};
    int ans = findKRotation(arr);
    cout << "The array is rotated " << ans << " times.\n";
    return 0;
}