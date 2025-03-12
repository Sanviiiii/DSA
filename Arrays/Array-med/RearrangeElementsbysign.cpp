//Brute
#include<bits/stdc++.h>
using namespace std;
vector<int> RearrangebySign(vector<int>&A ,int n){
    vector<int> pos;vector<int> neg;
    for(int i=0;i<A.size();i++){
        if(A[i]>0){
            pos.push_back(A[i]);
        }
        else neg.push_back(A[i]);
    }
    
    for(int i=0;i<n/2;i++){
      
      A[2*i] = pos[i];
      A[2*i+1] = neg[i];
  }
  return A;
}

int main()
   { int n = 4;
  vector<int> A {1,2,-4,-5,3,-3};

  vector<int> ans = RearrangebySign(A,n);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}

//optimal 1

#include<bits/stdc++.h>
using namespace std;
vector<int> RearrangebySign(vector<int>&A){
    int n=A.size();
    int posIn=0,negIn=1;
  vector<int> ans(n,0);

    for(int i=0;i<n;i++){
        if(A[i]<0){
            ans[negIn]=A[i];
            negIn+=2;
        }
        else{
             ans[posIn]=A[i];
            posIn+=2;
        }
    }
    
  return ans;
}

int main()
   { 
       
  vector<int> A {1,2,-4,-5,3,-3};

  vector<int> ans = RearrangebySign(A);
  
  for (int i = 0; i < ans.size(); i++) {
    cout << ans[i] << " ";
  }

  return 0;
}
