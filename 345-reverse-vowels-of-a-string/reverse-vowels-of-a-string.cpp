class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0, right = s.size() - 1;

        while (left < right) {
            if (vowels.find(s[left]) == vowels.end()) {
                left++;
            } else if (vowels.find(s[right]) == vowels.end()) {
                right--;
            } else {
                swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
        }
    
};