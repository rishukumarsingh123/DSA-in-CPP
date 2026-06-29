class Solution {
  public:
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int m=-1;
        for(int i=arr.size()-1;i>=0;i--){
            int curr=arr[i];
            arr[i]=m;
            m=max(m,curr);
        }
        return arr;
    }
};
