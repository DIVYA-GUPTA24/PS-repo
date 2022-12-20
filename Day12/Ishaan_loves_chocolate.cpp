class Solution {
  public:
    int chocolates(int n, vector<int> &arr) {
        // code here
        int mn=arr[0];
        for(int i=1;i<n;i++)
        {
            if(arr[i]<mn)
            {
                mn=arr[i];
            }
        }
       return mn;
    }
};
