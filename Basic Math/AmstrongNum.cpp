#include <iostream>
using namespace std;
 int AmstrongNum(int x) {
     int num=0;
     while(x>0){
         int rem=x%10;
         num=num+rem*rem*rem;
         x=x/10;
     }
       return num;
         }
      
int main() {
   int n;
   cin>>n;
int r=AmstrongNum(n);
cout<<r<<endl;
if(r==n){
    cout<<"It is an Amstrong number"<<endl;
}
else{
    cout<<"Not an amstrong";
}
    return 0;
}
