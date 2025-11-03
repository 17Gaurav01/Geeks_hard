/*
class Node {
    int data;
    Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }

}; */
// 35  24  20 17 11 8 4 

class Solution {
  public:
    int getMiddle(Node* i) {
        // code here
         
        Node *j = i;
        
        int cnt =0;
        while(j!=nullptr){
            j=j->next;
            cnt++;
        }
        
        int mid = cnt/2;
        for(int k=0;k<mid;k++){
            i = i->next;
        }
        return i->data;
        
       
        
    }
};