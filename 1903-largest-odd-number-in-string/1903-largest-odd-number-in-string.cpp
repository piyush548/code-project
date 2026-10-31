class Solution {
public:
    string largestOddNumber(string& s) {
           int start=0;
        int end = -1;
        for(int i=0;i<s.size();i++){
            if((s[i]-'0')!=0){
                start=i;
                break;
            }
        }
        for(int i=s.size()-1;i>=0;i--){
            if((s[i]-'0')%2!=0){
                end=i;
                break;
            }
        }
        if(end==-1) return "";
        else return s.substr(start,end-start+1);
    }
};