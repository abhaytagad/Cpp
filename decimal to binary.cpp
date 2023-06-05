#include<iostream>
using namespace std;
int main(){
    int n,power,ans;
    cout<<" enter the number:";
    cin>>n;
    power=1;
    
  
    ans=0;
    while (n>0){
       int c=n%2;
        
        
        ans+=c*power;
        power*=10;
        n/=2;
    }cout<<ans;
    
    return 0;
}