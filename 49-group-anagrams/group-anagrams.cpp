class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramMap;
        
        // Group strings by their sorted version
        for (const string& s : strs) {
            string sortedStr = s;
            sort(sortedStr.begin(), sortedStr.end());
            anagramMap[sortedStr].push_back(s);
        }
        
        // Collect the grouped anagrams into a vector
        vector<vector<string>> groupedAnagrams;
        for (auto& pair : anagramMap) {
            groupedAnagrams.push_back(pair.second);
        }
        
        return groupedAnagrams;
    }
};