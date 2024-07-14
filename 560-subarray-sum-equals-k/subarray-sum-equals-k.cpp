class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> cumulativeSumFreq;
        cumulativeSumFreq[0] = 1;
        int cumulativeSum = 0;
        int count = 0;

        for (int num : nums) {
            cumulativeSum += num;

            if (cumulativeSumFreq.find(cumulativeSum - k) !=
                cumulativeSumFreq.end()) {
                count += cumulativeSumFreq[cumulativeSum - k];
            }

            cumulativeSumFreq[cumulativeSum]++;
        }

        return count;
    }
};