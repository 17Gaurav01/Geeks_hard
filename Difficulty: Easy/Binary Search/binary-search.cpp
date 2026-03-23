class Solution {
  public:
    int binarysearch(vector<int> &arr, int k) {
        // code here
        int n = arr.size();
        
        int i = 0 , j = n-1;
        int ans = -1;
        while(i <= j){
            int mid = (i+j) >> 1;
            if(arr[mid] == k){
                ans = mid;
                j = mid-1;
            }
            else if(arr[mid] < k){
                i = mid + 1;
            }
            else j = mid -1;
        }
        return ans;
    }
};