#include<iostream>
#include<vector>
using namespace std;
int main(){
    int array[]={1,2,3,4,5,6,7,8,9,5,4};
    int count;
    for (int i=0;i<(sizeof(array)/sizeof(array[0]));i++){
            count=0;
            for (int j=0;j<sizeof(array)/sizeof(array[0]);j++){
                if (array[i]==array[j] and i!=j){
                    count+=1;
                    break;
            }    
        } if (count==0){
            cout<<array[i]<<endl;
        }
    }
    return 0;
}