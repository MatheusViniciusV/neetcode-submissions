class Solution
{
public:
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int l = 0, r = nums.size() - 1;

        vector<pair<int, int>> nums_pair;

        for(int i = 0; i < nums.size(); i++) nums_pair.push_back({nums[i], i});

        sort(nums_pair.begin(), nums_pair.end(), [](const auto& a, const auto& b){
            return a.first < b.first;
        });

        while(nums_pair[l].first + nums_pair[r].first != target)
        {
            (nums_pair[l].first + nums_pair[r].first < target) ? l++ : r--;
        }

        return {
            min(nums_pair[l].second, nums_pair[r].second), 
            max(nums_pair[l].second, nums_pair[r].second)
        };
    }
};
