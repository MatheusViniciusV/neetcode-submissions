class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> anagramGroups;
        vector<vector<string>> output;

        for(auto s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            anagramGroups[key].push_back(s);
        }

        for(auto group : anagramGroups) {
            output.push_back(group.second);
        }

        return output;
    }
};
