#include<iostream>
using namespace std;

int maxele(int array[],int size,int idx){
    if (idx==size-1)
    {
        return array[idx];
    }
    return max(array[idx],maxele(array,size,idx+1));
    
            
    
   
}

int main(){
        int array[]={2,1,3,2,5,2,7,3,8,2};
        int size=10;
        int idx=0;
       cout<<maxele(array,size,idx);
      
}
        