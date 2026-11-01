class Solution {
public:
    bool rotateString(string s, string goal) {
            if(s.size()!=goal.size()) return false;
			string temp = s;
            for(int i=0;i<temp.size();i++){
                if(temp == goal ) return true;
                char ch = temp[0];
                temp.erase(0,1);
                temp = temp+ ch;
            }
            return false;
    }
};