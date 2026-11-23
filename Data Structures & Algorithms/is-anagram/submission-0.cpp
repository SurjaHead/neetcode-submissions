class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> count;
        for (char c : s) {
            ++count[c];
        }
        for (char c : t) {
            --count[c];
        }
        for (int i=0; i < count.size(); ++i) {
            if (count[i] != 0) {
                return false;
            }
        }
        return true;
    }
};