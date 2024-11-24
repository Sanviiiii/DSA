#include <bits/stdc++.h>
using namespace std;

void pattern7(int N)
{
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
}
 for(int i=1;i<N;i++){
        for(int j=N;j>i;j--){
            cout<<"*";
        }
        cout<<endl;
}
}
int main()
{   
    int N = 5;

    pattern7(N);

    return 0;
}
/*
o/p

*
**
***
****
*****
****
***
**
*

*/