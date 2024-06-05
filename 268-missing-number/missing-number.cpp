class Solution {
public:
    int missingNumber(vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i <= n; ++i) {
            if (numSet.find(i) == numSet.end()) {
                return i;
            }
        }
        return -1; 
    }
};