
#include<bits/stdc++.h>
using namespace std;


int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int n=prices.size();
        int minPrice=prices[0];
        for(int i=1;i<n;i++){
            int cost=prices[i]-minPrice;
            maxProfit=max(maxProfit,cost);
            minPrice=min(minPrice,prices[i]);
        }
       return maxProfit;
    }
    int main() {
    vector<int> arr = {7,1,5,3,6,4};
    int maxPro = maxProfit(arr);
    cout << "Max profit is: " << maxPro << endl;
}