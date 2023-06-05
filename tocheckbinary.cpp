#include<iostream>
using namespace std;

int main(){
    
    int n;
    
    cin>>n;
    
    bool flag=true;
    
    int c=0;
    
    while (n!=0){
        
        c=n%10;
        
        if (c!=0 and c!=1){
            
            flag=false;
            
            break;
        }
        
        n=n/10;
    }
    if (flag==true){
        
        cout<<"given number is binary";
        
    }
    else{
        
        cout<<"given number is not binary";
    }
    
    return 0;
}       