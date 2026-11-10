class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxi = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                count++;
                maxi = max(maxi,count); // need to update the variables with the inc the itteration.
            }
            else{
                count = 0;
            }
        }
        return maxi;
    }
};
// max(a,b) it will give which one in bigger among the 2.