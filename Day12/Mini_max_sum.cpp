void miniMaxSum(vector<int> arr) {
    long long int minele=arr[4];
    for(int i=0;i<5;i++)
    {
        if(arr[i]<minele)
        {
            minele=arr[i];
        }
        
    }
    long long int maxele=arr[4];
    for(int i=0;i<5;i++)
    {
        
        if(arr[i]>maxele)
        {
            maxele=arr[i];
        }
    }
    long long int total=0;
    for(int i=0;i<5;i++)
    {
        total+=arr[i];
    }
    cout<<total-maxele<<" ";
    cout<<total-minele;
    

}
