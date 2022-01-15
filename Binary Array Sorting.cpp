Output Status:

Problem Solved Successfully 
You get marks only for the first correct submission if you solve the problem without viewing the full solution.
 Test Cases Passed:
335 / 335
Total Time Taken:
1.0/3.4
Correct Submission Count:
4
Attempts No.:
5


  class Solution{
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
        int j=0;
      for(int i=0;i<N;i++){
          if(A[i] == 0){
              swap(A[i],A[j]);
                j++;
          }
      }
    }
};

// Another Solution

class Solution {
  public:
    
    // A[]: input array
    // N: input array
    //Function to sort the binary array.
    void binSort(int A[], int N)
    {
       
       int low=0,high = N-1;
       
       while(low<=high){
           if(A[low] == 0){
               low++;
           }else if(A[high] == 1){
               high--;
           }else{
               swap(A[low],A[high]);
               low++;
               high--;
           }
       }
       
    }
};
