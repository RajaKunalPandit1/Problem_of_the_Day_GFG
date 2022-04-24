Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
58 / 58
Total Points Scored:
4/4
Total Time Taken:
0.2/1.3
Your Accuracy:
100%
Attempts No.:
1


class Solution{
public:

    bool primeCheck(long long n){
        
        if(n<=1) return false;
        if(n == 2 || n==3) return true;
        
        if(n%2 == 0 || n%3 == 0) return false;
        
        for(int i=5;i*i<=n;i+=6){
            if(n%i == 0 || n%(i+2) == 0){
                return false;
            }
        }
        return true;
    }

    long long primeProduct(long long L, long long R){
        
        long long product = 1;
        long long MOD = 1000000007;
        
        for(int i=L;i<=R;i++){
            if(primeCheck(i)){
                product = ((product%MOD) * (i%MOD)) % MOD;
            }
        }
        return product;
    }
};
