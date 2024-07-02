class Solution {
public:
   int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> jewelSet(jewels.begin(), jewels.end());
        int result = 0;
        for(char stone : stones) {
            if(jewelSet.count(stone)) {
                result++;
            }
        }
        return result;
    }
};
