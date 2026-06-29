class Solution {
  public:
    bool checkEqual(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int count=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            if(a[i]==b[i])  count++;
        }
        if(count==n)    return true;
        return false;
    }
};
