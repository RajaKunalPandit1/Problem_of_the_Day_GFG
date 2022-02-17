Output Status:

Problem Solved Successfully 
 Test Cases Passed:
219 / 219
Total Points Scored:
8/8
Total Time Taken:
0.3/1.2
Your Accuracy:
100%
Attempts No.:
1

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
class Solution{
public:
    
    int res = 0;
    
    int supplyVaccine(Node* root){
        
        if(vaccine(root) == "want"){
            res++;
        }
        
        return res;
    }
    
    string vaccine(Node *root){
        if(root == NULL){
            return "ok";
        }
        
        string left = vaccine(root->left);
        string  right = vaccine (root->right);
        
        if(left == "want" || right == "want"){
            res++;
            return "provide";
        }else if(left == "provide" || right == "provide"){
            return "ok";
        }else{
            return "want";
        }
        
    }
 };

// Another Solution 

class Solution
{
    int ans;

    int post(Node* node)
    {
        bool zero = false , two = false;
        if(node->left==NULL && node->right==NULL)
            return 0;
        
        if(node->left)
        {
            int get = post(node->left);
            if(get==0)
                zero = true;
            if(get==2)
                two = true;
        }
        
        if(node->right)
        {
            int get = post(node->right);
            if(get==0)
                zero = true;
            if(get==2)
                two = true;
        }
        
        if(zero==true)
        {
            ans++;
            return 2;
        }
        
        if(two==true)
        {
            return 1;
        }
        return 0; 
    }
public:
    int supplyVaccine(Node* root)
    {
        ans = 0;    
        int result = post(root);
        if(result == 0)
            return (ans + 1);
        return ans;
    }
};
