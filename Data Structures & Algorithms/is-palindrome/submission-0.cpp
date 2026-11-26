class Solution {
public:
    bool isPalindrome(string s) {
        string chars;
        for (char c : s) {
            if (isalnum(c)) chars.push_back(tolower(c));
        }
        int L = 0;
        int R = chars.size()-1;
        cout << chars;
        while (L <= R) {
            if (chars[L] != chars[R]) return false;
            ++L; --R;
        }
        return true;
    }
    
};
