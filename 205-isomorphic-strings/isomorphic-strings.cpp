class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, char> mapS;
        unordered_map<char, char> mapT;

        for (int i = 0; i < s.length(); ++i) {
            char cs = s[i];
            char ct = t[i];

            if (mapS.find(cs) != mapS.end() && mapS[cs] != ct) {
                return false;
            }

            if (mapT.find(ct) != mapT.end() && mapT[ct] != cs) {
                return false;
            }

            mapS[cs] = ct;

            mapT[ct] = cs;
        }

        return true;
    }
};