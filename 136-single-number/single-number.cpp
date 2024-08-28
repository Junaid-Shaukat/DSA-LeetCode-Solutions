class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(auto x:nums){
            mp[x]++;
        }
            for(auto z:mp){
                if(z.second==1) return z.first;
            
            }
        return -1;
    }
};