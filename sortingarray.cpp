#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int size,num;
    cout<<" size:";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>num;
        v.push_back(num);
    }
    
    for (int i=0;i<size; i++){
        if (v[i]==1){
            v.erase(v.begin()+i);
            v.push_back(1);
        }
    }for (int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}