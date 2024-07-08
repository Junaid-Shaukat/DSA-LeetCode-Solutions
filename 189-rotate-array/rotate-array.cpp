class Solution {
public:
    void rotate(vector<int>& nums, int k) {
  int n = nums.size();
        k = k % n;  // In case k is greater than the size of the array
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};