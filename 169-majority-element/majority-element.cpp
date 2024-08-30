class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for (int n : nums) {
            mp[n]++;
        }
        
        int maxN = 0; 
        int majN = 0;  
        
        for (auto it : mp) {
            if (it.second > majN) {
                maxN = it.first;
                majN = it.second;
            }
        }
        
        return maxN;
    }
};
