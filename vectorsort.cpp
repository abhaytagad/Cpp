#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int ele,size,i=0;
    cout<<"size:";
    cin>>size;
    while (i<size){
        cin>>ele;
        v.push_back(ele);
        i++;
    }
    
    bool flag= true;
    for (int e=1; e<size; e++){
       
        for (int j=0;j<e;j++){
            if (v[e]<v[j]){
                flag=false;
                
            }
        }
        
    }if (flag==false){
            cout<<" the array/vector is not sorted";
            
        }else {
            cout<<" the array/vector is  sorted";
        }
        
    return 0;
}
        
        