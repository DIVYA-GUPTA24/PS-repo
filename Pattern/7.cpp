#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
float sum=1,f=1,c;
int sign=1;

for(int i=1;i<n;i++){
f=f*(2*i+1)*(2*i);
sign=sign*(-1);
c=(i+1)/f;

sum=sum+sign*c;


}
cout<<sum;
return 0;
}
