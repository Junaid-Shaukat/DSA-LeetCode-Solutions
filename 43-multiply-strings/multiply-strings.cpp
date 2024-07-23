class Solution {
public:
    string multiply(string num1, string num2) {
    int n = num1.size();
    int m = num2.size();
    vector<int> result(n + m, 0);

    // Reverse iterate over both strings
    for (int i = n - 1; i >= 0; i--) {
        for (int j = m - 1; j >= 0; j--) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int sum = mul + result[i + j + 1];
            
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    // Convert result to string, skipping leading zeros
    string product = "";
    for (int num : result) {
        if (!(product.empty() && num == 0)) {
            product += to_string(num);
        }
    }

    return product.empty() ? "0" : product;
}

};