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
    for (int i=0; i<size; i++){
        for (int j=i+1;j<size;j++){
            if (v[i]>v[j]){
                swap(v[i],v[j]);
            }
        }
    }
    
    int c=0;
    for (int i=0;i<size; i++){
        c=v[i]*v[i];
        v.erase(v.begin()+i);
        v.insert(v.begin()+i,c);
            
            
        
    }for (int i=0;i<size;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}