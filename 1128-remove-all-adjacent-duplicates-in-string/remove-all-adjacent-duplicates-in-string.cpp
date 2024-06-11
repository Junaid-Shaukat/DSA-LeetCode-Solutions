class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> charStack;

    for (char ch : s) {
        if (!charStack.empty() && charStack.top() == ch) {
            charStack.pop();
        } else {
            charStack.push(ch);
        }
    }

    string result;
    while (!charStack.empty()) {
        result += charStack.top();
        charStack.pop();
    }

    reverse(result.begin(), result.end());
    return result;
    }
};