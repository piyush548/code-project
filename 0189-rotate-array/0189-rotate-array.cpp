class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);// then we will reverse till the number before k. as k is included in it so it will be excluted while performing.  
        reverse(nums.begin()+k,nums.end());// it will start from that k number and will reverse till end.
    }
};

// 