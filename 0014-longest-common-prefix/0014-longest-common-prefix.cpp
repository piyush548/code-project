class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        	string ans = "";
            sort(str.begin(),str.end()); // here end should one element.
            int i=0;
            while(i<str[0].size() && str[0][i]== str[str.size()-1][i] ){ //comparing the first element with the last element. if any common is found in the first and the second then then there will be common in the middle elements also as they are sorted.
                ans += str[0][i];
                i++;
            }
            return ans;
        
    }
};