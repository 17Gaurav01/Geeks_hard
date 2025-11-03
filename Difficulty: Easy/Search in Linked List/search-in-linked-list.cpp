/*
class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
}; */

class Solution {
  public:
    bool searchKey(Node* i, int key) {
        // Code here
        while(i!=nullptr){
            if(i->data == key){
                return true;
            }
            i=i->next;
        }
        return false;
    }
};
