class Solution {
public:
    bool isSubsequence(string s, string t) {

        int s_pointer = 0, t_pointer = 0;

        while (t_pointer < t.length()) {

            if (s_pointer < s.length() && s[s_pointer] == t[t_pointer]) {
                s_pointer++;
            }
            t_pointer++;
        }

        return s_pointer == s.length();
    }
};