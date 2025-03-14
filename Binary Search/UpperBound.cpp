#include <bits/stdc++.h>
using namespace std;
int upper_bound(const vector<int> &a,int target){
    int n=a.size();
    
    int ans=upper_bound(a.begin(),a.end(),target)-a.begin();
   
    return ans;
}
int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 7;
    int ind = upper_bound(a,target);
     if (ind == a.size()) 
        cout << "The upper bound does not exist." << endl;
    else cout << "The upper bound is: "
                  << ind << endl;
    return 0;
}