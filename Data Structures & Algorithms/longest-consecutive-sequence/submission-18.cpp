class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        // set<int> result;
        int best = 0;
        int cur = 1;
        sort(nums.begin(), nums.end(), [](const auto& a, const auto& b) {
            return b > a;
        });
        if (nums.size() <= 1) return nums.size();
        // result.insert(nums[0]);
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] - nums[i-1] == 1 ) {
                ++cur;
            } else if (nums[i] - nums[i-1] > 1) {
                cur = 1;
            } 
            if (cur > best) best = cur;
        }
        return best;
    }
};
