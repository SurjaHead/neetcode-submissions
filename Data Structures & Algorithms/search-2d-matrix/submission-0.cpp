class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int nl = 0;
        int nh = matrix[0].size() - 1;
        int nm = 0;

        int ml = 0;
        int mh = matrix.size() - 1;
        int mm = 0;

        while (ml <= mh) {
            mm = (ml + mh) / 2;
            if (target > matrix[mm][n-1]) {
                ml = mm + 1;
            } else if (target < matrix[mm][0]) {
                mh = mm - 1;
            } else {
                while (nl <= nh){
                    nm = (nl + nh) / 2;
                    if (target < matrix[mm][nm]) {
                        nh = nm - 1;
                    } else if (target > matrix[mm][nm]) {
                        nl = nm + 1;
                    } else if (target == matrix[mm][nm]) {
                        return true;
                    } 
                }
                return false;
            } 
        }
        return false;
    }
};
