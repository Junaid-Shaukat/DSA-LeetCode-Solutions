class Solution {
public:
    int averageValue(vector<int>& nums) {
        int s = 0, c = 0;
        for (int n : nums) {
            if (n % 6 == 0) {
                s += n;
                ++c;
            }
        }
            return c ? s / c : 0;
    }
};