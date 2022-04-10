Output Status:

Problem Solved Successfully 
 Test Cases Passed:
300 / 300
Total Points Scored:
4/4
Total Time Taken:
0.75/2.42
Your Accuracy:
100%
Attempts No.:
1

class Solution{
public:
    int minOperations(int *a,int n)
    {
        
        int count = 0;
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i=0;i<n;i++){
            if(!pq.empty() && pq.top() < a[i]){
                count+= a[i]-pq.top(),pq.push(a[i]),pq.pop();
            }
                pq.push(a[i]);
        }
        return count;
    }
};
