#include <iostream>
using namespace std;
void pattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
       
     for(int j=1;j<=2*(n-i);j++){
            cout<<" ";
        }
    for(int j=i;j>=1;j--){
            cout<<j;
        }
         cout<<endl;
   }
}

int main() {
    int n;
   cout<<"Enter n"<<endl;
   cin>>n;
   pattern(n);
    return 0;
}

/*

OP
Enter n
4
1      1
12    21
123  321
12344321



*/