#include<iostream>
using namespace std;
int main(){
int x;
int n;
cin>>n>>x;
float sum=x,f=1;
int p=x;
int sign=1;

for(int i=1;i<n;i++){
f=f*(2*i+1)*(2*i);
sign=sign*(-1);
p=p*x*x;
sum=sum+sign*(float(p)/f);


}
cout<<sum;
return 0;
}
