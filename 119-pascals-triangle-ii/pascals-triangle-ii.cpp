class Solution {
public:
    vector<int> getRow(int r) {
        vector<int> ans(r+1, 1);
        long long mul = 1;
        for(int i = 1; i < r; i++) {
            mul*=(r+1-i);
            mul/=i;
            ans[i] = mul;
        }
        return ans;
        
    }
};