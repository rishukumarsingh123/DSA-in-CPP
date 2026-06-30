class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
        int n=arr.size();
        for(int i=1;i<n;i++){
            arr[i]+=arr[i-1];
        }
        // Check index 0
        if (0 == arr[n - 1] - arr[0])
            return 0;
        for(int i=1;i<n;i++){
            if(arr[i-1]==(arr[n-1]-arr[i+1-1])){
                return i;
            }
        }
        return -1;
    }
};
