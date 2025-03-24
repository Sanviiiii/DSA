
     int first(vector<int>& nums, int target){
          int n=nums.size();
          int low=0,high=n-1,first=-1;
          while(low<=high){
             int mid=((low+high)/2);
              if(nums[mid]==target){
                  first=mid;
                  high=mid-1;
              }
              else if(nums[mid]<target){
                 low=mid+1;
              }
              else high=mid-1;
  
          }
      return first;
      }
      int last(vector<int>& nums, int target){
          int n=nums.size();
          int low=0,high=n-1,last=-1;
          while(low<=high){
             int mid=((low+high)/2);
              if(nums[mid]==target){
                  last=mid;
                  low=mid+1;
              }
              else if(nums[mid]<target){
                 low=mid+1;
              }
              else high=mid-1;
  
          }
      return last;
      }
      int countFreq(vector<int>& nums, int target) {
           int ft=first(nums,target);
         if(ft==-1) return 0;
         int lt=last(nums,target);
         return (lt-ft+1);
      }
