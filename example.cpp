#include<iostream>
#include<vector>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,3,4,6,7,8,9};
    int x;
    cin>>x;
    for (int i=0; i<(sizeof(array)/sizeof(array[0]));i++){
        for (int j=i; j<(sizeof(array)/sizeof(array[0]));j++){
            if (array[i]+array[j]==x and i!=j){
                cout<<array[i]<<" ,"<<array[j]<<endl;
            }
        }
    }
    return 0;
}
        
        
  
    