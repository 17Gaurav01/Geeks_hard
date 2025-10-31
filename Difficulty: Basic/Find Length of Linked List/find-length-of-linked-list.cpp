/*
class Node {
  public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int getCount(Node* i) {
        // Code here
        
        int cnt =0;
        
        while(i != nullptr){
            i = i->next;
            cnt++;
        }
        
        return cnt;
    }
};