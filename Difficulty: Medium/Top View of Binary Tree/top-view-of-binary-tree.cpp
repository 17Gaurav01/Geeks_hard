/*
struct Node
{
    int data;
    Node* left;
    Node* right;
};
*/
class Solution {
  public:
    // Function to return a list of nodes visible from the top view
    // from left to right in Binary Tree.
    vector<int> topView(Node *root) {
        // code here
        map<int,Node*>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        while(q.size()){
            Node* x=q.front().first;
            int l=q.front().second;
            q.pop();
            if(m[l]==0){
                m[l]=x;
            }
            if(x->left) q.push({x->left , l-1});
            if(x->right) q.push({x->right ,l+1});
        }
        vector<int>ans;
        for(auto x:m) ans.push_back(x.second->data);
        return ans;
    }
};

