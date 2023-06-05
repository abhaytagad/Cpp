#include<iostream>
using namespace std;

int elementofarray(int *array,int size){
    if (size>0){
    cout<<array[size]<<" ";
    return elementofarray(array,size-1);
    }
    else{
        cout<<&array<<"\n";
        return array[0];
        
    }
}

int main(){
    int array[]={1,2,3,4,5,6,7};
    int size=6;
     cout<<&array<<"\n";
    cout<<elementofarray(array,size);
}