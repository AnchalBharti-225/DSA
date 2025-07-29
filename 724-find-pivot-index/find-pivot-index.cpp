// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=1;i<n;i++)
//         {
//             nums[i]=nums[i-1]+nums[i];
//         }
//         int leftsum;
//         int rightsum;
//         for(int i=0;i<n;i++)
//         {
//             if(i==0)
//             {
//                 leftsum=0;
//                 rightsum=nums[n-1]-nums[0];
//             }
//             else
//             {
//                 leftsum=nums[i-1];
//                 rightsum=nums[n-1]-nums[i];
//             }
//             if(leftsum==rightsum)  return i;
//         }
//         return -1;
//     }
// };
class Solution
{
  public:
    int pivotIndex(vector<int>&nums)
    {
        int n=nums.size();
        int leftsum=0,rightsum=0;
        for(int i=0;i<n;i++)
        {
            rightsum+=nums[i];
        }
        for(int i=0;i<n;i++)
        {
            rightsum=rightsum-nums[i];
            if(leftsum==rightsum) return i;
            leftsum+=nums[i];
        }
        return -1;
    }
};