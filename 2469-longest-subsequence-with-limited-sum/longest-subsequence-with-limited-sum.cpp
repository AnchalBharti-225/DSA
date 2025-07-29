// Approach -I
class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        sort(nums.begin(),nums.end());
        vector<int>ans(m);
        // prefix sum array
        for(int i=1;i<n;i++)
        {
            nums[i]+=nums[i-1];
        }
        int len;
        for(int i=0;i<m;i++)
        {
            len=0;
            for(int j=0;j<n;j++)
            {
                if(nums[j]>queries[i])  break;
                else len++;
            }
            ans[i]=len;
        }
       return ans;
    }
};
// Approach-II :using binary search
// class Solution
// {
//     public:
//        vector<int>answerQueries(vector<int>&nums, vector<int>&queries)
//        {
//                 int n=nums.size();
//                 int m=nums.size();
//                 sort(nums.begin(),nums.end());
//                 vector<int>ans(m);
//                 for(int i=1;i<n;i++)
//                 {
//                     nums[i]+=nums[i-1];
//                 }
               
//                 for(int i=0;i<m;i++)
//                 {
//                    int lo=0;
//                    int hi=n-1;
//                    int maxlen=0;
//                     while(lo<=hi)
//                     {
//                         int mid=lo+(hi-lo)/2;
//                         if(nums[mid]>queries[i]) {hi=mid-1;}
//                         else
//                         {
//                             maxlen=mid+1;
//                             lo=mid+1;
//                         } 
//                     }
//                     ans[i]=maxlen;
//                 }
       
//        return ans;
//        }
// };
