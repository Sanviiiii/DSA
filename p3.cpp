#include <bits/stdc++.h>
using namespace std;

void pattern7(int N)
{
    int start =1;
    for(int i=0;i<N;i++){
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<i;j++){
            cout<<start;
           start=1-start;
        }
        cout<<endl;
}
}
int main()
{   
    int N =5;

    pattern7(N);

    return 0;
}

/*


0
10
010
1010


*/