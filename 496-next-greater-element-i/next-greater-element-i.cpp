class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> s;
        
        // Traverse nums2 from right to left
        for (int i = nums2.size() - 1; i >= 0; --i) {
            int num = nums2[i];
            // Maintain elements in the stack in decreasing order
            while (!s.empty() && s.top() <= num) {
                s.pop();
            }
            // The next greater element is on the top of the stack
            nextGreater[num] = s.empty() ? -1 : s.top();
            s.push(num);
        }
        
        // Build the result for nums1 using the nextGreater map
        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }
        
        return result;
    }
};