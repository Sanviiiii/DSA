#include <bits/stdc++.h>
using namespace std;

void allSubarray(vector<int>& nums) {
     int  n=nums.size();
      for(int i=0;i<n;i++){
          for(int j=i;j<n;j++){
              for(int k=i;k<=j;k++){
                  cout<<nums[k]<<" ";
                 
              }
               cout << endl;
          }
      }  
    }
int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
     allSubarray(a);
    
    return 0;
}
