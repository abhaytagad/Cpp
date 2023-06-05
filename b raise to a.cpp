#include<iostream>
using namespace std;
int main(){
    int a,b,result;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    result=1;
    for (int i=1; i<=b; i++){
        result=result*a;
    }cout<<"b is raise to the power of a:"<<result;
    return 0;
}