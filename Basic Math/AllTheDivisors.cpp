
#include <iostream>
using namespace std;
void PrintAllDivisors(int x) {
     for(int i=1;i<=x;i++){
         if(x%i==0){
             cout<<i<<" ";
         }
     }
         }
      
int main() {
   int n;
   cin>>n;

PrintAllDivisors(n);

    return 0;
}
    
/* new method*/
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void PrintDivisors(int n){
    vector<int> ls;
    for(int i=1;i*i<=n;i++){
        if((n%i)==0){
            ls.push_back(i);
        if((n/i)!=i){
         ls.push_back(n/i);
    }
}
}
sort(ls.begin(),ls.end());
for(auto it : ls) cout<<it <<" ";
}
int main() {
    int n;
  cin>>n;
PrintDivisors(n);
    return 0;
}