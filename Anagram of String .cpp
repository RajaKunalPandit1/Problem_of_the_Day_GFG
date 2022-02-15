Output Status: 

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
 Test Cases Passed:
50 / 50
Total Time Taken:
0.0/1.3
Correct Submission Count:
2
Attempts No.:
6


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
    int CHAR= 256;
    int arr[256] = {0};
    int res = 0;
    
    
    for(int i=0;i<str1.length();i++){
        arr[str1[i]]++;
    }
    
    for(int i=0;i<str2.length();i++){
        arr[str2[i]]--;
    }
    
    for(int i=0;i<256;i++){
        res += abs(arr[i]);
    }
    
    return res;
    
}
