class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> f;
        map<char,int> sc;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            sc[t[i]]++;
        }
        if(f!=sc) return false;
        else return true; 
    }
};
//simply sort them.