Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
22 / 22
Total Points Scored:
4/4
Total Time Taken:
0.8/2.2
Your Accuracy:
100%
Attempts No.:
1



vector<int> Smallestonleft(int arr[], int n)
{
    
    set<int> st;
    vector<int> res;
    st.insert(arr[0]);
    res.push_back(-1);
    
    for(int i=1;i<n;i++){
        st.insert(arr[i]);
        
       auto itr = st.lower_bound(arr[i]);
        
        if(itr == st.begin()){
            res.push_back(-1);
        }else{
            itr--;
            res.push_back(*itr);
        }        
    }
    return res;
}

// Another Solution 

vector<int> Smallestonleft(int arr[], int n)
{
    set<int> s;
    s.clear();
    auto it = s.begin();
    int min = INT_MAX;
    int k = 0;
    int ind = -1;
    for(int i = 0;i<n;i++){
        if(arr[i] < min){
            min = arr[i];
            ind = i;
        }
        auto itr = s.insert(arr[i]);
        it = itr.first;
        auto f = s.begin();
        if(it != s.end() && *f < arr[i]){
            it--;
            arr[k++] = *it;
        }
        else{
            arr[k++] = -1;
        }
        
        it = s.begin();
    }
    arr[0] = -1;
    arr[ind] = -1;
    vector<int> res;
    for(int i=0;i<n;i++){
        res.push_back(arr[i]);
    }
    return res;
}
