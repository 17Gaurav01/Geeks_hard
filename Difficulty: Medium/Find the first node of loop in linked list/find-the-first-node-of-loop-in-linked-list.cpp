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
    int cycleStart(Node* head) {
        // code here
        Node *i = head ; 
        Node *j = head;
        int flag = 0;
        while(j and j->next){
            i = i->next;
            j = j->next->next;
            if(i==j){
                flag = 1;
                break;
            }
        }
        if(flag == 0) return -1;
        j = head;
        while(i != j){
            i = i->next;
            j = j->next;
        }
        return i->data;
        
        
        
    }
};