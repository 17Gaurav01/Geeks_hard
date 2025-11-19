class Solution {
  public:
    vector<int> nextLargerElement(vector<int>& arr) {
        // code here
        int n= arr.size();
        stack<int>s;
        vector<int>res(n);
        
        for(int i=n-1;i>=0;i--){
            while(s.size() and s.top()<=arr[i]) s.pop();
            if(s.size()==0) res[i] = -1;
            else res[i] = s.top();
            s.push(arr[i]);
        }
        return res;
        
    }
};