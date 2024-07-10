class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) {
            return -1;
        }

        int minVal = *min_element(nums.begin(), nums.end());
        int maxVal = *max_element(nums.begin(), nums.end());

        for (int num : nums) {
            if (num > minVal && num < maxVal) {
                return num;
            }
        }
        return -1;
    }
};