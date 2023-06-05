#include<iostream>

using namespace std;

int main()
{

    int n,a,c,sum,result;

    cout<<" enter the number:";

    cin>>n;

    a=0;
    
    int binary=0;

    while(n!=0){

        c=n%10;

        n=n/10;

        result=1;   

        for (int i=0; i<a; i++){
        
            result=result*2;
    }
        
        binary=binary+(c*result);
     
        a++;
    }
    cout<<" decimal of given binary is:"<<binary;
    
    return 0;
}