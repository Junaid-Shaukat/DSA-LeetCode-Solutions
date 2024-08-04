class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);

        // Handle k = 0 case
        if (k == 0) {
            return result;
        }

        // Handle k > 0 case
        if (k > 0) {
            for (int i = 0; i < n; ++i) {
                int sum = 0;
                for (int j = 1; j <= k; ++j) {
                    sum += code[(i + j) % n];
                }
                result[i] = sum;
            }
        } else {
            // Handle k < 0 case
            int a = -k; // |k| when k < 0
            for (int i = 0; i < n; ++i) {
                int sum = 0;
                for (int j = 1; j <= a; ++j) {
                    sum += code[(i - j + n) % n];
                }
                result[i] = sum;
            }
        }

        return result;
    }
};