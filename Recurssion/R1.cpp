/*Print a name n times*/
#include<bits/stdc++.h>
using namespace std;

void func(int i, int n){
 
   if(i>n) return;
   cout<<"Raj"<<endl;

   func(i+1,n);

}

int main(){
  int n = 5;
  func(1,n);
  return 0;

}