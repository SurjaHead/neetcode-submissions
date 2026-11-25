class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int L = 0;
        set<int> values;
        // if (k == 0) return false;
        for (int R = 0; R < nums.size(); ++R) {
            if (R - L > k) {
                values.erase(nums[L]);
                ++L; 
            } 
            if (values.contains(nums[R])) return true;
            values.insert(nums[R]);
        }    
        return false;
    }
};


