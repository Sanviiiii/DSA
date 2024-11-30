#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void PrintDivisors(int n){
   int count=0;
    for(int i=1;i*i<=n;i++){
        if((n%i)==0){
           count++;
        if((n/i)!=i){
       count++;
    }
}
}
if(count==2){
    cout<<"It is a Prime Number";
}
else cout<<"It is not a Prime Number";
}
int main() {
    int n;
  cin>>n;
PrintDivisors(n);
    return 0;
}