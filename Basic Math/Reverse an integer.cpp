
#include <iostream>
using namespace std;
 int reverse(int x) {
        int original=x,rev=0;
      while(x>0) {
        int lastdigit=x%10;
        rev=(rev*10)+lastdigit;
        x=x/10;
         }
      return rev;
 }
int main() {
   int n;
   cin>>n;
int r=reverse(n);
 cout<<r;
    return 0;
}

/*To check if n is a palindrome*/
#include <iostream>
using namespace std;
 int reverse(int x) {
        int original=x,rev=0;
      while(x>0) {
        int lastdigit=x%10;
        rev=(rev*10)+lastdigit;
        x=x/10;
         }
      return rev;
 }
int main() {
   int n;
   cin>>n;
int r=reverse(n);
cout<<r<<endl;
if(r==n){
    cout<<"It is a palindrome"<<endl;
}
else{
    cout<<"Not apalindrome";
}
    return 0;
}