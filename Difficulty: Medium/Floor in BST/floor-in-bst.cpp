/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
  int ans = INT_MIN;
    void helper(Node* r , int x){
        if(!r) return;
        if(r->data <= x and r->data > ans){
            ans = r->data;
            helper(r->right , x);
        }
        else{
            helper(r->left , x);
        }
    }
    int floor(Node* root, int x) {
        // code here
        helper(root , x);
        if(ans == INT_MIN) return -1;
        return ans;
    }
};