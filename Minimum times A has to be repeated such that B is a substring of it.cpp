Output Status:

Problem Solved Successfully 
 Test Cases Passed:
211 / 211
Total Points Scored:
4/4
Total Time Taken:
0.0/1.6
Your Accuracy:
100%
Attempts No.:
1


class Solution {
  public:
  
    bool solve(string &s,string &s1){
        int i=0;
        int n = s.size();
        
        int j=0;
        int m = s1.size();
        
        while(i<n && j<m){
            if(s[i] != s1[j]){
                i++;
                j=0;
            }else{
                i++;
                j++;
            }
        }
        return j==m;
        
    }
  
    int minRepeats(string A, string B) {
      
      int n = A.size();
      int n1 = B.size();
      
      int p = n1/n;
      
      string s = "";
      
      while(p--){
          s += A;
      }
      
      p = n1/n;
      
      bool x = solve(s,B);
      
      if(x == true){
          return p;
      }
      p++;
      s+=A;
      
      if(solve(s,B) == true){
          return p;
      }
        return -1;      
    }
};
