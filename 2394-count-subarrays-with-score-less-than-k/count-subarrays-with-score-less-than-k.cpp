class Solution {
public:
    long long countSubarrays(vector<int>& nums, long long k) {
        long long int n=nums.size();
        long long int count=0;
        long long int i=0,j=0;
        long long int score;
        long long int sum=0;
        long long int ans=0;
        while(i<n and j<n)
        {
            sum+=nums[j]; // window expansion
            score=sum*(j-i+1);
            while(i<=j and score>=k)
            {
                // window contraction
                sum-=nums[i++];
                score=sum*(j-i+1);

            }
            ans+=(j-i+1);
            j++;
        }
          return ans;
    }
};