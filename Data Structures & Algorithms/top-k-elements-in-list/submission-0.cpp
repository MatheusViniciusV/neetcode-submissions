class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> frequencies;

        for(auto x : nums) {
            frequencies[x]++;
        }

        vector<pair<int, int>> sortedFrequencies(frequencies.begin(), frequencies.end());

        sort(sortedFrequencies.begin(), sortedFrequencies.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });

        vector<int> output;

        for(int i = 0; i < k; i++) {
            output.push_back(sortedFrequencies[i].first);
        }

        return output;
    }
};
