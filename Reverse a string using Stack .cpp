Output Status: 

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
 Test Cases Passed:
300 / 300
Total Time Taken:
0.0/1.7
Correct Submission Count:
4
Attempts No.:
5

//return the address of the string
char* reverse(char *S, int len)
{
    
    char *r = new char[len];
    stack <char> st;
    
    for(int i=0;i<len;i++){
        st.push(S[i]);
    }
    
    int j=0;
    while(!st.empty()){
        r[j] = st.top();
        st.pop();
        j++;
    }
    return r;
    
}
