class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n = s.length();

        for (int i = 1; i <= n / 2; ++i) {
            if (n % i == 0) {

                string substring = s.substr(0, i);
                bool isRepeated = true;
                for (int j= i; j < n; j += i) {
                    if (s.substr(j, i) != substring) {
                        isRepeated = false;
                        break;
                    }
                }
                if (isRepeated) {
                    return true;
                }
            }
        }

        return false;
    }
};