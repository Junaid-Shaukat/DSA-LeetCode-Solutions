class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    unordered_map<int,int> mp;
    for(int n:nums1)
    {
        if(mp.find(n) == mp.end())
        {
            mp[n]=0;
        }
    }
    for(int i=0;i<nums2.size();i++)
    {
        if(mp.find(nums2[i]) != mp.end())
        {
            if(mp[nums2[i]] ==0)
            {
                ans.push_back(nums2[i]);
                mp[nums2[i]] = 1;
            }
        }
    }
    return ans;
    }
};