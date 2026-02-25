class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n = arr.size();
        int mx = INT_MIN;
        int sum = 0;
        for(int i = 0 ;i < k ;i++){
            sum += arr[i];
        }
        mx = max(mx , sum);
        int i = 0;
        int j = k;
        
        while(j < n){
            sum += arr[j];
            sum -= arr[i];
            mx = max(mx , sum);
            i++;
            j++;
        }
        return mx;
        
    }
};