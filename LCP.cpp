Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
205 / 205
Total Points Scored:
4/4
Total Time Taken:
0.02/2.2
Your Accuracy:
100%
Attempts No.:
1


class Solution{
public:
    string LCP(string ar[], int n)
    {
       
       sort(ar,ar+n);
       
       string first = ar[0], last = ar[n-1], ans ="";
       int in;
       
       for(int i=0;last.size();i++){
           
           if(last[i] != first[i]){
               in = i;
               break;
           }
       }
       
       ans = last.substr(0,in);
       if(ans.size() > 0){
           return ans;
       }else{
           return "-1";
       }
       
    }
};
