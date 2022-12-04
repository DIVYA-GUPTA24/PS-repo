#include<iostream>
using namespace std;
int main(){
int n,sum=0,c;
cin>>n;
for(int i=1;i<=n;i++){
c=i*(i+1)*(i+2);
sum=sum+c;
}
cout<<sum;}
