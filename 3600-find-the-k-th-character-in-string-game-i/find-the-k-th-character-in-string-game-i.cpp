class Solution {
public:
   char kthCharacter(int k) {
    return (__builtin_popcount(k-1)%26) + 'a'; 
}
};