class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        vector<int> v;
        int max=INT_MIN;
        int min=INT_MAX;
        int len=arr.size();
        
        for(int i=0;i<len;i++){
            if(arr[i]>max)  max=arr[i];
            if(arr[i]<min)  min=arr[i];
        }
        v.push_back(min);
        v.push_back(max);
        return v;
    }
};
