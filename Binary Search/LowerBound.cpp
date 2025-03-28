//
#include <bits/stdc++.h>
using namespace std;
int lower_bound_index(const vector<int> &a,int target){
    int n=a.size();
    int low=0,high=n-1;
    int ans=n;
    while(low<=high){
       int mid=(low+high)/2;
        if(a[mid]>=target){
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    return ans;
}
int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 10;
    int ind = lower_bound_index(a,target);
     if (ind == a.size()) 
        cout << "The lower bound does not exist." << endl;
    else cout << "The lower bound is: "
                  << ind << endl;
    return 0;
}


//
#include <bits/stdc++.h>
using namespace std;
int lower_bound_index(const vector<int> &a,int target){
    int n=a.size();
    
    int ans=lower_bound(a.begin(),a.end(),target)-a.begin();
   
    return ans;
}
int main()
{
    vector<int> a = {3, 4, 6, 7, 9, 12, 16, 17};
    int target = 17;
    int ind = lower_bound_index(a,target);
     if (ind == a.size()) 
        cout << "The lower bound does not exist." << endl;
    else cout << "The lower bound is: "
                  << ind << endl;
    return 0;
}
//upprer 
// if(a[mid]>target)