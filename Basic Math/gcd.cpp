#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void GCD(int n,int m){
    int gcd;
 for(int i=1;i<=min(n,m);i++){
     if(n%i==0 && m%i==0){
         gcd=i;
     }
 }
 cout<<endl<<gcd;
}
int main() {
    int n,m;
  cin>>n;
  cin>>m;
GCD(n,m);
    return 0;
}

/*
Euclidean Algorithm

gcd(n1,n2) = gcd(n1-n2,n2) n1>n2
gcd(a,b) = gcd(a-b,b) a>b

*/
//This can done by recurssion also
#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void GCD(int a,int b){
  while(a>0 && b>0){
      if(a>b) a=a%b;
      else b=b%a;
  }
  if (a==0) cout<<"gcd is "<<b;
  else cout<<"gcd is "<<a; 
}
int main() {
    int n,m;
  cin>>n;
  cin>>m;
GCD(n,m);
    return 0;
}