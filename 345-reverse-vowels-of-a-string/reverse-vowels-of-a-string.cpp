class Solution {
public:
    std::string reverseVowels(std::string s) {
        std::unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Move left pointer to the next vowel
            while (left < right && vowels.find(s[left]) == vowels.end()) {
                left++;
            }
            // Move right pointer to the previous vowel
            while (left < right && vowels.find(s[right]) == vowels.end()) {
                right--;
            }
            // Swap the vowels
            if (left < right) {
                std::swap(s[left], s[right]);
                left++;
                right--;
            }
        }

        return s;
    }
};