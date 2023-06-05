#include<iostream>
using namespace std;
int main(){
    int n,sum1 ,sum2;
    cout<<" enter the number:";
    cin>>n;
    sum1=0;
    sum2=0;
    for (int i=1; i<=n; i++){
        if (i%2==0){
            sum1+=i;
        }
        else{
            sum2+=i;
        }
    }cout<<" sum of the given series:"<<(sum2-sum1);
  
    
    
    return 0;
}