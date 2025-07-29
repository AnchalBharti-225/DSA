// class Solution {
// public:
//     vector<int> findErrorNums(vector<int>& nums) {
//         int n=nums.size();
//         int i=0;
//         while(i<n)
//         {
//             int correctIdx=nums[i]-1;
//             if(nums[correctIdx]==nums[i]) i++;
//             else swap(nums[i],nums[correctIdx]);
//         }
//         vector<int> ans;
//         for(int i=0;i<n;i++)
//         {
//             if(nums[i]!=i+1) 
//             {
//                 ans.push_back(nums[i]);
//                 ans.push_back(i+1);
//                 break;
//             }
//         }
//         return ans;
        
//     }
// };
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        while(i<n)
        {
            int correctIdx=nums[i]-1;
            if(nums[correctIdx]==nums[i]) i++;
            else swap(nums[i],nums[correctIdx]);
        }
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=i+1) 
            {
               return {nums[i],i+1};
            }
        }
        return {};
        
    }
};