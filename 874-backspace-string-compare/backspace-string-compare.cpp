class Solution {
public:
    bool backspaceCompare(string s, string t) {
               return processString(s) == processString(t);
    }

private:
    string processString(const string& str) {
        stack<char> resultStack;
        for (char ch : str) {
            if (ch != '#') {
                resultStack.push(ch);
            } else if (!resultStack.empty()) {
                resultStack.pop();
            }
        }
        
        string result;
        while (!resultStack.empty()) {
            result += resultStack.top();
            resultStack.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
    };