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
