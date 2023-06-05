#include<iostream>
using namespace std;

int digitsum(int n){
    if (n/10==0){
        return n;
    }
    else{
    return (n%10)+digitsum(n/10);
    }
}
int main(){
    int n;
    cin>>n;
    cout<< "sum of digits:"<<digitsum(n);
}