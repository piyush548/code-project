class Solution {
public:
    bool checkPerfectNumber(int n) {
                int sum=0;
        int oroginalnum=n;
        for(int i=1;i<n-1;i++){
            if(n%i==0){
                sum=sum+i;
            }
        }

        if(sum==oroginalnum) return true;
            else return false;
    }
};