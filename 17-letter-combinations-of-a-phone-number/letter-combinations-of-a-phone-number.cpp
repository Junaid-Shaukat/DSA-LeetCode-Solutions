class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};
        
        // Mapping of digits to corresponding letters
        vector<string> digitToLetters = {
            "",    // 0
            "",    // 1
            "abc", // 2
            "def", // 3
            "ghi", // 4
            "jkl", // 5
            "mno", // 6
            "pqrs",// 7
            "tuv", // 8
            "wxyz" // 9
        };
        
        vector<string> result;
        string current;
        backtrack(digits, digitToLetters, 0, current, result);
        return result;
    }
    
    void backtrack(const string &digits, const vector<string> &digitToLetters, int index, string &current, vector<string> &result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }
        
        char digit = digits[index];
        const string &letters = digitToLetters[digit - '0'];
        
        for (char letter : letters) {
            current.push_back(letter);
            backtrack(digits, digitToLetters, index + 1, current, result);
            current.pop_back();
        }
    }
};