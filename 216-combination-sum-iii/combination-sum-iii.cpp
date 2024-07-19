
class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> res;
        vector<int> combination;
        backtrack(res, combination, k, n, 1);
        return res;
    }
    
    void backtrack(vector<vector<int>>& res, vector<int>& combination, int k, int n, int start) {
        if (combination.size() == k && n == 0) {
            res.push_back(combination);
            return;
        }
        
        for (int i = start; i <= 9; ++i) {
            if (i > n) break;
            combination.push_back(i);
            backtrack(res, combination, k, n - i, i + 1);
            combination.pop_back();
        }
    }
};
