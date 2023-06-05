#include<iostream>
using namespace std;
int main(){
    int n,a,c,sum;
    cout<<" enter the number:";
    cin>>n;
    sum=0;
  
    a=0;
    while (n!=0){
        
        n=n/10;
        a++;
        
      
    }cout<<"number of digit in the number are:"<<a;
    
    return 0;
}