class Solution {
public:
    int partitionString(string s) {
       unordered_set<char> seen;
        int partitions = 0;

        for (char c : s) {
            if (seen.find(c) != seen.end()) {
                partitions++;
                seen.clear();
            }
            seen.insert(c);
        }
    
        if (!seen.empty()) {
            partitions++;
        }

        return partitions;
    }
};