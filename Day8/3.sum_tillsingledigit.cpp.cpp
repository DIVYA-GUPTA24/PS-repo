#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num,x1,x2,x3,x4;
    cin>>num;
    x1=num%10;
    x2=num/10;
    int sum=x1+x2;
    while(sum>9)
    {

        x3=sum%10;
        x4=sum/10;
        sum=x3+x4;
    }
    cout<<sum;
    return 0;
}
