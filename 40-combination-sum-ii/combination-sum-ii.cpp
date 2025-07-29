class Solution {
public:
    void go(vector<int>&a,int idx,int tgt,vector<int>&temp,vector<vector<int>>&ans)
    {
        if(tgt==0)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=idx;i<a.size();i++)
        {
            if(i!=idx and a[i]==a[i-1]) continue;
            if(tgt>=a[i])
            {
                temp.push_back(a[i]);
                go(a,i+1,tgt-a[i],temp,ans);
                temp.pop_back();
                
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        go(candidates,0,target,temp,ans);
        return ans;
        
    }
};