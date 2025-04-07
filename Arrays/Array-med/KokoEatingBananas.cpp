class Solution {
    public:
    int findMax(vector<int>& piles){
         int maxi = INT_MIN;
        int n = piles.size();
        
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }
    long long MinTime(vector<int>& piles, int hourly){
      int  n=piles.size();
         long long hours=0;
        for(int i=0;i<n;i++){
             
             hours += ceil((double)piles[i] / (double)hourly);
    
        }
        return hours;
    }
        int minEatingSpeed(vector<int>& piles, int h) {
            int low=1,high=findMax(piles);
            while(low<=high){
                int mid=(low+(high-low))/2;
                if(MinTime(piles,mid)<=h){
                   
                   high=mid-1;
                }
                else low=mid+1;
            }
            return low;
        }
    };