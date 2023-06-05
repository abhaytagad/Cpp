#include<iostream>
#include<vector>
using namespace std;
int secondMax( int array[], int size){
    int max=INT_MIN;
    int second_max=INT_MIN;
    for (int i=0; i<size;i++){
        if (array[i]>max){
            max=array[i];
        }
    }
    for (int i=0;i<size;i++){
        if (array[i]>second_max and array[i]!=max){
            second_max=array[i];
        }
    }
   
    return  second_max;
    
}
        
int main(){
    int array[]={1,2 ,3,4,5,4,3,6,7,8,9 ,7,6,};
    int size =13;
    cout<<secondMax(array,size);
    return 0;
}