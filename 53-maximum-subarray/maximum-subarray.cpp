class Solution {
public:
  int maxSubArray(vector<int>& nums) {
    int max_sum = nums[0]; // Initialize with first element
    int curr_sum = 0;

    for (int i = 0; i < nums.size(); i++) { // Use nums.size()
      curr_sum = std::max(nums[i], curr_sum + nums[i]);  // Update curr_sum
      max_sum = std::max(max_sum, curr_sum);          // Update max_sum
    }
    return max_sum;
  }
};