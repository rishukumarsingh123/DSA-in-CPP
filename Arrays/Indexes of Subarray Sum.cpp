class Solution {
  public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        vector<int> ans;
        int s=arr.size();
        for(int i = 0; i < s ; i++)   
        {
            int temp = target;
            int j = i;

            while(j < s && temp > 0)  
            {
                temp -= arr[j];
                j++;
            }

            if(temp == 0)
            {
                ans.push_back(i + 1);  
                ans.push_back(j);      
                return ans;
            }
        }

        return {-1};  
    }
};
