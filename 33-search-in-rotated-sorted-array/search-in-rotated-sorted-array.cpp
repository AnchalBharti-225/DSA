class Solution {
public:
    // Approach I:
    // int search(vector<int>& nums, int target) {
    //     int n=nums.size();
    //     int lo=0;
    //     int hi=n-1;
    //     if(n==2)
    //     {
    //         if(target==nums[0]) return 0;
    //         else if(target==nums[1]) return 1;
    //         else return -1;
    //     }
    //     int pivot=-1; // smallest element
    //     while(lo<=hi)
    //     {
    //         int mid=lo+(hi-lo)/2;
    //         if(mid==0) lo=mid+1;
    //         else if (mid==n-1) hi=mid-1;
    //         else if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]) 
    //         {
    //             pivot=mid;
    //             break;
    //         }
    //         else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])
    //         {
    //             pivot=mid+1;
    //             break;
    //         }
    //        else if (nums[mid]>nums[hi])
    //        {lo=mid+1;}
    //        else
    //        {
    //          hi=mid-1;
    //        }
    //     }
    //     if(pivot==-1)
    //     {
    //         //array already sorted , no rotation
    //         lo=0;
    //         hi=n-1;
    //         // normal binary search
    //         while(lo<=hi)
    //         {
    //             int mid=lo+(hi-lo)/2;
    //             if(nums[mid]==target) return mid;
    //             else if(nums[mid]>target) 
    //             {
    //                        hi=mid-1;
    //             }
    //             else
    //              { lo=mid+1;}
                
    //         }
    //         return -1;
    //     }
    //     if(target>=nums[0] && target<=nums[pivot-1])
    //     {
    //         lo=0;
    //         hi=pivot-1;
            
    //         while(lo<=hi)
    //         {
    //             int mid=lo+(hi-lo)/2;
    //             if(nums[mid]==target) return mid;
    //             else if(nums[mid]>target) hi=mid-1;
    //             else lo=mid+1;
    //          }
    //     }
    //     else
    //     {
    //         lo=pivot;
    //         hi=n-1;
    //         while(lo<=hi)
    //         {
    //            int mid=lo+(hi-lo)/2;
    //            if(nums[mid]==target) return mid;
    //            else if(nums[mid]>target) hi=mid-1;
    //            else lo=mid+1;
    //         }
    //     }
    //     return -1;
        
    // }
    // Approach II:
    int search(vector<int>&a,int tgt)
    {
        int low=0,hi=a.size()-1;
        while(low<=hi)
        {
            int mid=low+(hi-low)/2;
            if(a[mid]==tgt) return mid;
            else if(a[low]<=a[mid])
            {
                if(a[low]<=tgt and tgt<=a[mid])
                {hi=mid-1;}
                else low=mid+1;

            }
            else
            {
                if(a[mid]<=tgt and tgt<=a[hi])
                {low=mid+1;}
                else
                 hi=mid-1;
            }
             
        }
    return -1;
    }
};