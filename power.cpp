#include<iostream>
using namespace std;
int power(int p, int q){
    
    if (q==0){
        return 1;
    }
    else{
        q--;
        return p*power(p,q);
    }
}

int main(){
    int p,q;
    cin>>p>>q;
    cout<<"the power of p:"<<power(p,q);
}