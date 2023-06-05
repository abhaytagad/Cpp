#include<iostream>
using namespace std;
int main(){
    int array[2]={1,4};
    int *ptr=&array[0];
    cout<<ptr<<" "<<*ptr<<"\n";
    ptr=ptr+1;
    cout<<ptr<<" "<<*ptr<<"\n";
    
    int *nulptr=NULL; //it will be null pointer
    cout<<nulptr<<"\n";
    return 0;
    
}