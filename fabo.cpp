#include<iostream>
using namespace std;
int fabo(int n){
    if (n==1 ){
        return 1;
    }else if (n==0){
        return 0;
    }
    
    else{
        return (fabo(n-2)+fabo(n-1));
    }
}
int main(){
    int n;
    cout<<" enter the num:";
    cin>>n;
    cout<<fabo(n);
    return 0;
}
    