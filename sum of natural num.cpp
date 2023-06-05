#include<iostream>
using namespace std;
int main(){
    int n,count,i;
    cout<<" enter the last number:";
    cin>>n;
    count=0;
    i=1;
    while(i<=n){
        count+=i;
        i++;
        
    }
    cout<<"sum of natural numbers is:"<<count;
    
    return 0;
}