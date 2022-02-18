Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
26 / 26
Total Points Scored:
2/2
Total Time Taken:
0.4/1.5
Your Accuracy:
50%
Attempts No.:
2



class Solution {
  public:
    void prank(long long a[], int n){
       
       for(int i=0;i<n;i++){
           long int x  = a[i];
           long int y = a[x];
           
           a[i] = x + (y%n)*n;
       }
       
       for(int i=0;i<n;i++){
           a[i] = a[i]/n;
       }
       
    }
};

// Another Solution 

class Solution {
  public:
    void prank(long long a[], int n){

        long long N = n;
        for(int i = 0;i<n;i++){
            a[i] = a[i] + (a[a[i]]%N) * N;
        }

        for(int i = 0;i<n;i++)
            a[i] = a[i]/N;
    }
};
