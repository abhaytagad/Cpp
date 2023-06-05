#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v1;
    vector<int> v2;
    int array[]={1,2,3,4,5,6,8,9,7};
    int size=9;
    for (int i=0;i<size; i++){
        if (array[i]%2==0){
            v1.push_back(array[i]);
        }else{
            v2.push_back(array[i]);
        }
    }
    for (int i=0;i<v1.size();i++){
        cout<<v1[i]<<",";
    }cout<<endl;
    for (int i=0;i<v2.size();i++){
        cout<<v2[i]<<",";
    }
    return 0;
}