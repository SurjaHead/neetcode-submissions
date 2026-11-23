class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        std::unordered_map<int, int> freq;
        for (int a : nums) {
            ++freq[a];
        }
        std::sort(nums.begin(), nums.end(), [&freq](int a, int b){
            if (freq[a] == freq[b]) {
                return a > b;
            } else {
                return freq[b] > freq[a];
            }
        });
        return nums;
    }
};