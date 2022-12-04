#include<iostream>
using namespace std;
int main(){
int n,x;
float p=1.0,f=1.0,sum=1.0;
cin>>n>>x;
for(int i=1;i<=n;i++){
f=f*i;
p=p*x;
sum=sum+p/f;
}
cout<<sum;}
