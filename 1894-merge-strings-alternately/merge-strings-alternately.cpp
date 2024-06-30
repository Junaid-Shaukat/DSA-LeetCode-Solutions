class Solution {
public:
    string mergeAlternately(string word1, string word2) {
     int i = 0, j=0;
     string result = "";
     while(i<word1.size() && j<word2.length()){
        result+=word1[i++];
        result+=word2[j++];
     }
     
     while(i<word1.size()){
        result+=word1[i++];
     }
     while(j<word2.length()){
        result+=word2[j++];
     }
     return result;
    }
};