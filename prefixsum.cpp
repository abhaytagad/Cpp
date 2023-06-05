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
    int sum=0;
    for (int i=0;i<size; i++){
        sum=sum+v[i];
        v.erase(v.begin()+i);
        v.insert(v.begin()+i,sum);
    }
    
    
    for (int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}