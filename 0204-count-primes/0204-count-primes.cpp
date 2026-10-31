class Solution {
public:
    int countPrimes(int n) { //let n=30
        if(n<2) return 0;
        int prime[n+1];
        for(int i=0;i<=n;i++){
            prime[i]=1;
        }
        prime[0]=0;
        prime[1]=0;
        for(int i=2;i*i<=n;i++){ // write i*i to check.
            if(prime[i]==1){
                for(int j=i*i;j<=n;j+=i){ // 7*7=49 49<=30 false. so for upper for loop
                    prime[j]=0;
                }
            }
        }
        int count=0;
        for(int i=2;i<n;i++){ // for number less than thats why <n
            if(prime[i]==1) count++;
        }
        return count;
    }
};