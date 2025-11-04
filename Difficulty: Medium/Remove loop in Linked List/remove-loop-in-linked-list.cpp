/*
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
// 28 10 7
class Solution {
  public:
    void removeLoop(Node* head) {
        // code here
        Node *i = head;
        Node *j=head;
        int f=0;
        
        while(j and j->next){
            i=i->next;
            j=j->next->next;
            if(i==j){
                f=1;
                break;
            }
        }
        if(f==0) return;
        
        j=head;
        while(i!=j){
            i=i->next;
            j=j->next;
        }
        
        while(j->next !=i){
            j=j->next;
        }
        j->next=nullptr;
        
        
    }
};