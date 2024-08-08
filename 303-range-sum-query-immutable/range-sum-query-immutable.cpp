class NumArray {
private:
    std::vector<int> prefixSum;

public:
    NumArray(std::vector<int>& nums) {
        int n = nums.size();
        prefixSum.resize(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }
    }

    int sumRange(int left, int right) {
       
        return prefixSum[right + 1] - prefixSum[left];
    }
};
