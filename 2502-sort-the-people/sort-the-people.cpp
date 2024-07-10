class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int n = names.size();

        vector<pair<int, string>> people;
        for (int i = 0; i < n; ++i) {
            people.push_back({heights[i], names[i]});
        }

        sort(people.rbegin(), people.rend());

        vector<string> sortedNames;
        for (const auto& person : people) {
            sortedNames.push_back(person.second);
        }
        return sortedNames;
    }
};