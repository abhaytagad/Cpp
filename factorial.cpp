#include<iostream>
using namespace std;
int main(){
    int n, mul;
    cout<<" enter the number:";
    cin>>n;
    mul=1;
    for (int i=1; i<=n ; i++){
        mul=mul*i;
    }
    cout<<" the factorial of given number:"<<mul;
    
    
    return 0;
}