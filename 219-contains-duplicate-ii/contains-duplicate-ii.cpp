class Solution {
public:
  
bool containsNearbyDuplicate(vector<int>& nums, int k) {
    unordered_map<int, int> num_indices;

    for (int i = 0; i < nums.size(); i++) {
        if (num_indices.find(nums[i]) != num_indices.end() && abs(i - num_indices[nums[i]]) <= k) {
            return true;
        }
        num_indices[nums[i]] = i;
    }

    return false;
}
};