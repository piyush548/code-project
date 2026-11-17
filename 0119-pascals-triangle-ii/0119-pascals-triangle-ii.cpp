class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;

        long long val = 1;

        for(int i = 0; i <= rowIndex; i++) { // as it is zero indexed so i<= bca for row 3 we need to access all the 4 elements, but if it is 1 indexed then the row no is equal to the no of elements.
            ans.push_back(val);

            val = val * (rowIndex - i) / (i + 1);
        }

        return ans;
    }
};

// Variable	Formula
// rowIndex (0-indexed)	rowIndex - i
// r (1-indexed)	        r - 1 - i