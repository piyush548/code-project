class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> mpp;
        int n = nums.size();

        for(int i = 0; i < n; i++) {
            int a = nums[i];
            int more = target - a;

            if(mpp.find(more) != mpp.end()) { //If find() is not equal to end(), it means the element exists.
                return {mpp[more], i};
            }

            mpp[a] = i;
        }

        return {};
    }
};

//mpp[more] gives the previously stored index.
//i gives the current index.