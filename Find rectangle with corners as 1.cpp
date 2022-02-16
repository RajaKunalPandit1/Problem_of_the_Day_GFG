Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
58 / 58
Total Points Scored:
4/4
Total Time Taken:
0.1/2.2
Your Accuracy:
50%
Attempts No.:
2


class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix)
    {
        
        unordered_map<int,unordered_set<int>>mp;
        
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                    for(int j2 = j+1;j2<m;j2++){
                        if(matrix[i][j] == 1 && matrix[i][j2] ==1 ){
                            if(mp.find(j) != mp.end() && mp[j].find(j2) != mp[j].end()){
                                return true;
                            }else{
                                mp[j].insert(j2);
                            }
                        }
                    }
            }
        }
        return false;
        
        
    }
};

// Another Solution 


class Solution{
    public:
    bool ValidCorner(const vector<vector<int> >& matrix) {
       int rows = matrix.size();
       if (rows == 0)
          return false;
       
       int columns = matrix[0].size();
       unordered_map<int, unordered_set<int> > ump;
       for (int i = 0; i < rows; ++i) {
          for (int j = 0; j < columns - 1; ++j) {
             for (int k = j + 1; k < columns; ++k) {
                if (matrix[i][j] == 1 && matrix[i][k] == 1) {
                   if (ump.find(j) != ump.end() && ump[j].find(k) != ump[j].end())
                      return true;
                   if (ump.find(k) != ump.end() && ump[k].find(j) != ump[k].end())
                      return true;
                   ump[j].insert(k);
                   ump[k].insert(j);
                }
             }
          }
       }
       return false;
    }
};
