#include <bits/stdc++.h>
using namespace std;
string Rev(string s){
    int start=0;
    int end=s.size()-1;
    while(start<end){
        swap(s[start],s[end]);
        start++;
        end--;
    }
    return s;
}
int main() {
   string s;
   cin>>s;
string s1 =Rev(s);
cout<<s1;
    return 0;
}

// This code reverses a string in C++.
// It uses a two-pointer technique to swap characters from the start and end of the string until they meet in the middle.
#include <bits/stdc++.h>
using namespace std;
void  Rev(string &s, int start,int end){
    
    if(start>=end) 
        return ;
    swap(s[start],s[end]);
  return  Rev(s,start+1,end-1);
    
}
int main() {
   string s;
   cin>>s;
  Rev(s,0,s.length()-1);
  cout<<s;
    return 0;
}