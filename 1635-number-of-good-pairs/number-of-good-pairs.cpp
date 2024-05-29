class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n=0;
        for(int i=0;i<nums.size();i++){
            for (int j=0;j<nums.size();j++){
                if(nums[i]==nums[j]&&i<j){
                    n=n+1;
                }
                // cout<<n;
            }
        }
        return n;
    }
};