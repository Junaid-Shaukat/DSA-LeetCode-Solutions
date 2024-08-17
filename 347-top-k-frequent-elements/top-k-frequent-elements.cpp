class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> frequencyMap; // 1. Create a map to store frequencies
        for (int num : nums) {
            frequencyMap[num]++; // 2. Count the frequency of each number
        }

        // 3. Create a max heap (priority queue) to store numbers by their frequency
        priority_queue<pair<int, int>> maxHeap;
        for (auto& entry : frequencyMap) {
            maxHeap.push({entry.second, entry.first}); // push frequency, number
        }

        vector<int> result; // 4. Vector to store the k most frequent elements
        for (int i = 0; i < k; ++i) {
            result.push_back(maxHeap.top().second); // 5. Get the number with the highest frequency
            maxHeap.pop(); // Remove the top element from the heap
        }

        return result; // 6. Return the k most frequent elements
    }
};