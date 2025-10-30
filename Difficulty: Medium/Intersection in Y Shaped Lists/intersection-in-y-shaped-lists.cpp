/*
class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    Node* intersectPoint(Node* head1, Node* head2) {
        //  Code Here
        Node *i=head1;
        Node *j=head2;
        
        while(1){
            if(i==j) return i;
            if(i->next==nullptr) i=head2;
            else if(j->next==nullptr) j=head1;
            i=i->next;
            j=j->next;
        }
        return i;
    }
};