class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> freq;
        for (int x : nums) {
            ++freq[x];
        }
        std::vector<pair<int, int>> items(freq.begin(), freq.end());
        std::vector<int> result;
        std::sort(items.begin(), items.end(), [](const auto& a, const auto& b) {
            return a.second > b.second;
        });
        for (int i = 0; i < k; ++i) {
            result.push_back(items[i].first);
        }
        return result;
    }
};
