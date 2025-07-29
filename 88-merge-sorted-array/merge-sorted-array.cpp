class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int>v3(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<m && j<n)
    {
        if (nums1[i]<=nums2[j])
        { v3[k]=nums1[i];i++;}
        else 
        {v3[k]=nums2[j];j++;}
        k++;
    }
    if (i==m)
    { while(j<n)
      { v3[k]=nums2[j];j++;k++;}
    }
    else if(j==n)
    {   while(i<m)
       { v3[k]=nums1[i]; i++;k++;}
    }
    nums1=v3;
}


};