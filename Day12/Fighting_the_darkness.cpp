class Solution{   
public:
    int maxDays(int arr[],int n){
        int mx=arr[0];
        for(int i=1;i<n;i++)
        {
            if(mx<arr[i])
            {
                mx=arr[i];
            }
        }
        return mx;
    }
};
