#include<bits/stdc++.h>
using namespace std;
 vector<int> leaders(vector<int>& arr) {
        int n=arr.size();
        if (n==0) return {};
        int maxi=INT_MIN;
        vector <int> ans;
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=maxi){
                ans.push_back(arr[i]);
        }
       maxi=max(maxi,arr[i]);
    }
    reverse(ans.begin(),ans.end());
    return ans;
    }

       
  int main() {
  
vector<int> arr = {10, 22, 12, 3, 0, 6};

  vector<int> ans = leaders(arr);
  
  
  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  return 0;
}