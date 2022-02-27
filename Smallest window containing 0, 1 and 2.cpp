Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
2030 / 2030
Total Points Scored:
2/2
Total Time Taken:
0.0/1.0
Your Accuracy:
50%
Attempts No.:
2


class Solution {
  public:
    int smallestSubstring(string S) {
        
        int n = S.length();
        int a = -1,b=-1,c=-1;
        int ans = INT_MAX;
        
        
        for(int i=0;i<n;i++){
            if(S[i] == '0'){
                a = i;
            }else if(S[i] == '1'){
                b = i;
            }else{
                c = i;
            }
            
            if(a == -1 || b == -1 || c == -1){
                continue;
            }else{
                int temp = i-min(a,min(b,c));
                ans = min(ans,temp+1);
            }
        }
        
        if(ans == INT_MAX){
            return -1;
        }else{
            return ans;
        } 
       
    }
};
