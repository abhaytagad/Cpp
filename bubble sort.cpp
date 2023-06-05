#include<iostream>
using namespace std;

int main(){
    int array[]={3,7,5,3,7,8,6,5,4,9};
    
    for (int i=0; i<9; i++){
        for (int j=0;j<9-i;j++){
             
            if (array[j]>array[j+1]){
                swap(array[j],array[j+1]);
            }
        }
    }
    for (int i=0; i<10; i++){
        cout<<array[i]<<" ";
    }
}