
#include <iostream>
using namespace std;
void pattern(int n){
    int num=1;
   for(int i=1;i<=n;i++){
       for(int j=1;j<=i;j++){
    cout<<num<<" ";
    num++;
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
o/p

Enter n
5
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/

/*
#include <iostream>
using namespace std;
void pattern(int n){
    
   for(int i=0;i<n;i++){
       for(char ch = 'A'; ch<='A'+i;ch++){
              cout<<ch<<" ";
  
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
}*/

/*

#include <iostream>
using namespace std;
void pattern(int n){
    
   for(int i=0;i<n;i++){
       for(char ch = 'A'; ch<='A'+(n-i-1);ch++){
              cout<<ch<<" ";
  
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
*/