#include <bits/stdc++.h>
using namespace std;
void occ(string s){
    
    int freq[26]={0};
    for(char c: s){
        freq[c-'a']++;
    }
    for(int i=0;i<26;i++){
        if(freq[i]>0){
            cout<<char(i+'a')<<" occurs : "<<freq[i]<<" times "<<endl;
        }
    }
}
int main() {
   string s;
   cin>>s;
occ(s);
    return 0;
}