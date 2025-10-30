/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    vector<int> printList(Node *i) {
        // code here
        vector<int>ans;
        
        while(i != NULL){
            ans.push_back(i->data);
            i = i->next;
        }
        return ans;
        
        
        
    }
};