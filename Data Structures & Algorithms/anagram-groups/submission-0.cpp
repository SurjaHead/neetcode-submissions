class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, vector<string>> freq;
        std::vector<vector<string>> result;
        for (std::string str : strs) {
            std::string key = str;
            sort(key.begin(), key.end());
            freq[key].push_back(str);
        }
        for (auto anagram : freq) {
            result.push_back(anagram.second);
        };
        return result;
    }
};
