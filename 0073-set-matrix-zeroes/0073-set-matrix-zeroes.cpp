class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool firstrow = false;
        bool firstcol = false;

        // check weather the first row is impacted or not
        for (int i = 0; i < m; i++) {
            if (matrix[0][i] == 0) { // row is const col changes.
                firstrow = true;
                break;
            }
        }

        // check for first col
        for (int j = 0; j < n; j++) {
            if (matrix[j][0] == 0) { // col is const
                firstcol = true;
                break;
            }
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0;
                    matrix[0][j] = 0;
                }
            }
        }

        // start from [1][1]
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        if (firstrow) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0; // makr 0th row as zero
            }
        }

        if (firstcol) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0; // make 0th col as zero
            }
        }
    }
};