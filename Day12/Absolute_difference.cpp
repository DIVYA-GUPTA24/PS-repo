class Solution
{
public:
    vector<long long> getDigitDiff1AndLessK(long long *arr, int n, long long k)
    {
        // code here
        vector<long long int>ans;

        for(int i=0; i<n; i++)
        {
            if(arr[i]<k)
            {
                string s=to_string(arr[i]);
                int c=0;
                for(int i=0; i<s.length()-1; i++)
                {
                    if(abs((s[i]-'0')-(s[i+1]-'0'))==1)
                    {
                        c++;
                    }
                }
                if(s.length()>1 && c==s.length()-1)
                {
                    ans.push_back(arr[i]);
                }
            }
        }
        if(ans.size()==0)
        {
            return {-1};
        }
        return ans;
    }
};
