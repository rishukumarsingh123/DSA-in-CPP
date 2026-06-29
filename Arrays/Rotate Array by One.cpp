class Solution {
  public:
      void rotateArray(vector<int>&a,int i,int j)
      {
          while(i<=j){
              swap(a[i],a[j]);
              i++;
              j--;
          }
      }
    void rotate(vector<int> &arr) {
        // code here
        rotateArray(arr,0,arr.size()-1);
        rotateArray(arr,1,arr.size()-1);
    }
};
