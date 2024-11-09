class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        vector<int>rets;
        for(int i = 0; i + k <= nums.size(); i++)
            rets.push_back( helper(nums, k, x, i) );
        return rets;
    }
    int helper(vector<int>& nums, int k, int x, int idx){
        unordered_map<int, int>Map;
        priority_queue<pair<int, int>>pq;
        for(int i = 0; i < k; i++){
            Map[nums[idx + i]]++;
        }
        for(auto [key, count] : Map){
            pq.push({count, key});
        }
        int ret = 0;
        int items = 0;
        while(items < x && !pq.empty()){
            ret += pq.top().second  * pq.top().first;
            pq.pop();
            items++;
        }
        return ret;
    }
};