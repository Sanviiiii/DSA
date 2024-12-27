#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1) return n;
  int  last=fib(n-1);
  int  slast=fib(n-2);
return last+slast;
}

int main() {
    string s;
    cin>>s;
    //pre computing
   int hash[26]={0};
   for(int i=0;i<s.size();i++){
       hash[s[i]-'a']++;
   }
   int q;
   cin>>q;
   while(q--){
       char c;
       cin>>c;
       cout<<hash[c-'a']<<endl;
   }
    return 0;
}