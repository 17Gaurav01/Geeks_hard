/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */

class Solution {
  public:
    int getMiddle(Node* head) {
        // code here
        
        int cnt =0;
        
        Node* i = head;
        
        while(i!=nullptr){
            i=i->next;
            cnt++;
        }
        
        
        int mid = cnt/2;
        
        for(int j=0;j<mid;j++){
            head = head->next;
        }
        
        return head->data;
        
        
    }
};