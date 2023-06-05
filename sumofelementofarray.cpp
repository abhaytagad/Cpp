#include<iostream>
using namespace std;

int sum(int array[],int size, int idx){
   if (idx<=size-1){
       
   
    return array[idx]+sum(array,size,idx+1);
   }
}
   
int main(){
        int array[]={1,2,3,8};
        int size=4;
        int idx=0;
       cout<<sum(array,size,idx);
      
}
        
    