class Solution {
  public:
    // Function to delete middle element of a stack.
    void deleteMid(stack<int>& s) {
        // code here..
        int n = s.size();
        int mid = (n+1)/2;
        if(n&1){
            mid--;
        }
        stack<int>temp;
       
        
     
        while(mid--){
            temp.push(s.top());
            s.pop();
        }
        s.pop();
        while(temp.size()){
            s.push(temp.top());
            temp.pop();
        }
        
    }
};