class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> pos;
        vector<int> nev;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                pos.push_back(nums[i]);
            }
            else nev.push_back(nums[i]);
        }
        vector<int> ans;
        for(int i=0;i<pos.size();i++){
            ans.push_back(pos[i]);
            ans.push_back(nev[i]);
        }
        return ans;
    }
};

// pos.size() decides when the loop stops.



// pos[i] accesses an element from the positive vector.



// neg[i] accesses an element from the negative vector.