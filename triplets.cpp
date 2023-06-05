#include<iostream>
#include<vector>
using namespace std;
int main(){
    int array[]={3,1,2,4,0,6};
    int x;
    cin>>x;
    for (int i=0; i<(sizeof(array)/sizeof(array[0]));i++){
        for (int j=i; j<(sizeof(array)/sizeof(array[0]));j++){
          for (int k=j+1; k<(sizeof(array)/sizeof(array[0]));k++){
              if (array[k]+array[i]+array[j]==x and i!=k and i!=j and j!=k){
                  cout<<array[i]<<","<<array[j]<<","<<array[k]<<endl;
              }
        
          
            }
        }
    }
    return 0;
}
        
        
  
  