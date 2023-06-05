#include<iostream>
using namespace std;
int main(){
    float a,b,c;
    cout<<" enter the coeficient a, b, c:";
    cin>>a>>b>>c;
    float discriminant=b*b-4*a*c;
    if (discriminant==0){
        cout<<"the root of the quadratic eq is:"<<(-b/(2*a))<<endl;
    }else if (discriminant>0){
        cout<<" the root of quadratic eq is:"<<((-b+sqrt(discriminant))/(2*a))<<endl;
        cout<<" the root of quadratic eq is:"<<((-b-sqrt(discriminant))/(2*a))<<endl;
        
    }else{
        cout<<" the root of quadratic eq :"<<(-b/(2*a))<<'+'<<((sqrt(-discriminant))/(2*a))<<'i'<<endl;
         cout<<" the root of quadratic eq :"<<((-b)/(2*a))<<'-'<<((sqrt(-discriminant))/(2*a))<<'i'<<endl;
    }
        
    return 0;
}
        
    
    