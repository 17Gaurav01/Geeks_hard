/*
class Node {
   public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
} */

class Solution {
  public:
    bool detectLoop(Node* head) {
        // code here
        Node *i = head;
        Node *j = head;
        
        while(j and j->next){
        i = i->next;
        j = j->next ->next;
            if(i==j){
                return true;
            }
        }
        
        return false;
        
    }
};