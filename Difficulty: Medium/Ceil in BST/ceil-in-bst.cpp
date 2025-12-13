class Solution {
  public:
  int ans = INT_MAX;
    void helper(Node* r , int tar){
        if(!r) return ;
        
        if(r->data == tar ){
            ans = r->data;
        }
        else if(r->data > tar and r->data < ans){
            ans = r->data;
            helper(r->left , tar);
        }
           
        else{
            helper(r->right , tar);
        }
    }
  
    int findCeil(Node* root, int x) {
        // code here
         helper(root , x);
         if(ans == INT_MAX) return -1;
         return ans;
        
    }
};
