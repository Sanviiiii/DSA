//brute
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int missingNum(vector<int> &a){
    int N=a.size();
    for(int i=1;i<=N;i++){
      int  flag=0;
        for(int j=0;j<N;j++){
            if(a[j]==i){
                flag=1;
                break;
            }
        }
        if (flag == 0) return i;
    }
    return -1;
}
int main() {

    vector<int> a = {1, 2,3, 4, 5,6,7,9,10};
    int ans = missingNum(a);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

//optimal 1-summation method
// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;
int missingNum(vector<int> &a){
    int N=a.size()+1;
   int sum=(N*(N+1))/2;
   int sum2=0;
   for(int i=0;i<N;i++){
       sum2+=a[i];
   }
    return (sum-sum2);

}
int main() {

    vector<int> a = {1, 2,3, 4, 5,6,7,9,10};
    int ans = missingNum(a);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
//optimal 2 - hash
#include <iostream>
#include <vector>
using namespace std;
int missingNum(vector<int> &a, int N){
    int hash[N+1]={0};
    for(int i=0;i<N-1;i++){
        hash[a[i]]++;
    }
    for(int i=1;i<=N;i++){
        if(hash[i]==0){
            return i;
        }
    }
return -1;
}
int main() {
        int N = 10;
        vector<int> a = {1, 2,3, 4, 5,6,7,9,10};
    int ans = missingNum(a,N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}
//optimal 3 xor



#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ a[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}

