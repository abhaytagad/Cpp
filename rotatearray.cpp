#include<iostream>
#include<vector>
using namespace std;
int main(){
    int rotate;
    int array[]={1,2,3,4,5,6,7,8};
   int size=8;
    cout<<"how many times want to rotate?:";
    cin>>rotate;
   int k=rotate%size,j=0;
   int ansarray[size];
   for  (int i=size-k; i<size;i++){
       
       ansarray[j++]=array[i];
       
   }
   for  (int i=0; i<size-k;i++){
       
       ansarray[j++]=array[i];
   }
   for (int i=0; i<size;i++){
       cout<<ansarray[i]<<endl;
   }
   return 0;
}
   
       
       