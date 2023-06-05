#include<iostream>
using namespace std;
int main(){
    int n,a=0,b=1,c;
    cout<<"number of terms ";
    cin>>n;
    for (int i=1; i<n; i++){
        if (i==1){
            cout<<a<<endl;
        }else if(i==2){
            cout<<b<<endl;
        }
        c=a+b;
        a=b;
        b=c;
        cout<<c<<endl;
    }
        
    return 0;
}