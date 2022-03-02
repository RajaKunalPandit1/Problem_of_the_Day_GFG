Output Status: 

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
 Test Cases Passed:
11024 / 11024
Total Time Taken:
0.1/2.2
Correct Submission Count:
2
Attempts No.:
2


class Solution
{
public:
    long long countStrings(string s)
    {
        
        int n = s.length();
        
        map<int,int> mp;
        
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        
        long long res = 0;
        
        for(int i=0;i<n;i++){
            res += (n-mp[s[i]]);
        }
        
        res = res/2;
        
        for(auto x:mp){
            if(x.second >= 2){
                res++;
                break;
            }
        }
        return res;
    }
};
