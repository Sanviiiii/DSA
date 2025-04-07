//Problem Statement: You are given an array of integers 'arr' and an integer i.e. a threshold value 'limit'. Your task is to find the smallest positive integer divisor, such that upon dividing all the elements of the given array by it, the sum of the division's result is less than or equal to the given threshold value.
class Solution {
    public:
    int  SumByD(vector<int> &nums, int div){
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum=sum+ceil((double)(nums[i])/double(div));
        }
        return sum;
    }
        int smallestDivisor(vector<int>& nums, int threshold) {
            int low=1,high =*max_element(nums.begin(),nums.end());
           int n=nums.size();
           if(n>threshold) return -1;
            while(low<=high){
                int mid=(low+high)/2;
                if(SumByD(nums,mid)<= threshold){
                    high =mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            return low;
        }
    };