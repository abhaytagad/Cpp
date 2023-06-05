#include<iostream>
using namespace std;
int main(){
    int n,sum,b;
    cout<<" enter the number:";
    cin>>n;
    
    sum=0;
    while (n!=0){
        sum=sum+(n%10);
         n=n/10;
        
        
    }cout<<"the sum of the digits:"<<sum;
        
    
  
   
 
    
    return 0;
}