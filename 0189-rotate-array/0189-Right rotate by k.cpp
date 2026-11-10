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

// 1 2 3 4 5 6 7 ---->> want (5 6 7 1 2 3 4)

// 7 6 5 4 3 2 1 ---> step 1 (reverse) k=3

// reverse 7 6 5 

// reverse 4 3 2 1 
