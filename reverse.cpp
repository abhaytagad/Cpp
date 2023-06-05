#include<iostream>
using namespace std;
int main(){
    int n,i1=0,i,r;
    cout<<"enter ghe num:";
    cin>>n;
    i=0;
    while (i<=n){
        r=(n%10);
        i1=r+10*i1;
        n/=10;
        i++;
    }cout<<i1;
    return 0;
}