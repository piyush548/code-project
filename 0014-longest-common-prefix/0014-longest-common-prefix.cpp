class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        	string ans = "";
            sort(str.begin(),str.end());
            int i=0;
            while(i<str[0].size() && str[0][i]== str[str.size()-1][i] ){
                ans += str[0][i];
                i++;
            }
            return ans;
        
    }
};