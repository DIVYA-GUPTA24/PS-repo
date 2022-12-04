#include<iostream>
using namespace std;
void series(int i, int f=1, int sum=0){
    for(int i=1;i<=5;i++){
f=f*i;
sum=sum+f/i;}
cout<<sum;
}
int main(){
    int i, f=1, sum=0;
    series(i,f,sum);
}
