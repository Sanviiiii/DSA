//brute
#include <bits/stdc++.h>
using namespace std;

bool linearSearch(vector<int>&a, int num) {
    int n = a.size(); 
    for (int i = 0; i < n; i++) {
        if (a[i] == num)
            return true;
    }
    return false;
}
int longestSuccessiveElements(vector<int>&a) {
    int n = a.size(); 
    int longest = 1;
    for (int i = 0; i < n; i++) {
        int x = a[i];
        int cnt = 1;
        while (linearSearch(a, x + 1) == true) {
            x += 1;
            cnt += 1;
        }

        longest = max(longest, cnt);
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}


//better
#include <bits/stdc++.h>
using namespace std;

int longestSuccessiveElements(vector<int>&a) {
    int n=a.size();
    if(n==0) return 0;
    sort(a.begin(),a.end());
    int last_smallest=INT_MIN;
    int cnt=0;
    int longest=1;
    for(int i=0;i<n;i++){
        if(a[i]-1==last_smallest){
            cnt++;
            last_smallest=a[i];
        }
        else if(last_smallest!=a[i]){
            cnt=1;
            last_smallest=a[i];

        }
        longest=max(longest,cnt);
    }
    return longest;
}

int main()
{
    vector<int> a = {100, 200, 1, 2, 3, 4};
    int ans = longestSuccessiveElements(a);
    cout << "The longest consecutive sequence is " << ans << "\n";
    return 0;
}



//optimal

int longestConsecutive(vector<int>& nums) {
    if (nums.size()==0) return 0;
    
    int n=nums.size();
    unordered_set<int> st;
    
    int longest=1;
    for(int i=0;i<n;i++){
    st.insert(nums[i]);
    }
    for(auto it : st){
   if(st.find(it-1)==st.end()){
    int cnt=1;
    int x=it;
    while(st.find(x+1)!=st.end()){
        x=x+1;
        cnt++;
    }
     longest=max(longest,cnt);
   }
    }
    return longest;
}