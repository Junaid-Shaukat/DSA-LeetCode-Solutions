class Solution {
public:
    int countGoodSubstrings(string s) {
        int count = 0;
        int n = s.size();
        
        // Iterate through the string with a sliding window of size 3
        for (int i = 0; i <= n - 3; ++i) {
            // Extract the substring of length 3
            string sub = s.substr(i, 3);
            
            // Use a set to check if all characters in the substring are unique
            unordered_set<char> chars(sub.begin(), sub.end());
            
            // If the set size is 3, then all characters are distinct
            if (chars.size() == 3) {
                ++count;
            }
        }
        
        return count;
    }
};
