class Solution {
public:
    string frequencySort(string s) {
        			map<char,int> freq;
            for(int i=0;i<s.size();i++){
                freq[s[i]] ++;
            }
            string ans; //string stores multiple elements.
            for(auto it=freq.begin();it!=freq.end();it++){ //auto automatically detects the type of whatever variable you initialize
                ans.push_back(it->first);
            }
            sort(ans.begin(),ans.end(),[&](char a,char b){
            if(freq[a] != freq[b]){
                return freq[a] > freq[b]; //Higher frequency comes first.
            }
            return a<b;
            });
            string result;
            for(int i=0;i<ans.size();i++){
                for(int j=0;j<freq[ans[i]];j++){
                    result.push_back(ans[i]);
                }
            }
            return result;
    }
};