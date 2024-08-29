class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int n = nums.size();
        int sum_n = n * (n + 1) / 2;
        int array_sum = std::accumulate(nums.begin(), nums.end(), 0);
        return sum_n - array_sum;
    }
};