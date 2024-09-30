class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++){
           result.push_back(( nums[i] * nums[i]));
        }
       sort(result.begin(),result.end());

       return result;
    }
};