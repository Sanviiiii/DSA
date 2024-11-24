
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
    