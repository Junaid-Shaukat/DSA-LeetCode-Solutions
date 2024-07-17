class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        backtrack(result, "", 0, 0, n);
        return result;
    }
    
private:
    void backtrack(vector<string>& result, string current, int open, int close, int max) {
       
        if (current.size() == 2 * max) {
            result.push_back(current);
            return;
        }
    
        if (open < max)
            backtrack(result, current + "(", open + 1, close, max);
        
        if (close < open)
            backtrack(result, current + ")", open, close + 1, max);
    }
};