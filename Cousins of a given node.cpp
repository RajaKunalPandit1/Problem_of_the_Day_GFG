Output Status: 

Problem Solved Successfully 
 Test Cases Passed:
50 / 50
Total Points Scored:
4/4
Total Time Taken:
0.8/2.0
Your Accuracy:
100%
Attempts No.:
1


/*
// A Binary Tree Node
struct Node
{
	int data;
	Node* left;
	Node* right;
};*/

class Solution
{
    public:
    vector<int> printCousins(Node* root, Node* node_to_find)
    {
        queue<Node *> q;
        
        q.push(root);
        vector <int> res;
        
        bool flag = true;
        
        while(!q.empty() && flag){
            
            int n = q.size();
            
            for(int i=0;i<n;i++){
                Node *node = q.front();
                q.pop();
                
                if(node->right == node_to_find || node->left == node_to_find){
                    flag = false;
                }else{
                    if(node->left){
                        q.push(node->left);
                    }
                    if(node->right){
                        q.push(node->right);
                    }
                }
            }
        }
        
        if(q.empty()){
            return {-1};
        }else{
            while(!q.empty()){
                res.push_back(q.front()->data);
                q.pop();
            }
        }
        return res;
        
    }
    
    };
