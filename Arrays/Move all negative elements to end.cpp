class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        // code here
        vector<int>v;
        for(int x: arr){
            if(x>=0)    v.push_back(x);
        }
        for(int x: arr){
            if(x<0)    v.push_back(x);
        }      
        arr=v;
    }
};
