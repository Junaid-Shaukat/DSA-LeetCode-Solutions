class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        for(int i =0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] == nums[j] ) result++;
            }
        }
        return result;
    }
};