#include <iostream>
using namespace std;
int fib(int n){
    if(n<=1) return n;
  int  last=fib(n-1);
  int  slast=fib(n-2);
return last+slast;
}

int main() {
    int n=6;
    fib(n);
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    return 0;
}