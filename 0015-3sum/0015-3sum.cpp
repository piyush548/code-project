class Solution {
public:

    void twosum(vector<int>& nums, int target, int i, int j, vector<vector<int>>& ans) {

        while(i < j) {

            if(nums[i] + nums[j] > target) { //If the sum is greater than the target, decrease j to get a smaller number. as they are arranged.
                j--;
            }
            else if(nums[i] + nums[j] < target) {
                i++;
            }
            else {
                ans.push_back({-target, nums[i], nums[j]});//Because the else condition executes only when the sum is equal to the target.

                while(i < j && nums[i] == nums[i+1]) {
                    i++;
                }

                while(i < j && nums[j] == nums[j-1]) {
                    j--;
                }

                i++;
                j--;
                // after sorting a valid triplet we need to move to the nexxt one to find another possible triplet.
            }
        }
    }

    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;

        int n = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < n; i++) {

            if(i > 0 && nums[i] == nums[i-1]) {
                continue;  // continue skip the present iteration and then moves to the next iteration.
            }

            int n1 = nums[i]; //// first no fixed so send the next no for 2 sum
            int target = -n1;

            twosum(nums, target, i+1, n-1, ans);
        }

        return ans;
    }
};