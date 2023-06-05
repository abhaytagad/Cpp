#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size, n;
    cout<<"size:";
    cin>>size;
    vector<vector<int> >v(size,vector<int>(size));
    
    
    cout<<" enter the numbers:"<<endl;
    for (int i=0; i<size;i++){
        for (int j=0; j<size; j++){
            cin>>n;
            v[i][j]=n;
        }
        cout<<endl;
    }
    for (int i=0; i<size;i++){
        for (int j=i; j<size; j++){
            if (i==j){
                continue;
            }else{
                swap(v[i][j],v[j][i]);
            }
        }cout<<endl;
    }
    
        
    
    for (int i=0; i<size; i++){
        reverse(v[i].begin(),v[i].end());
    }for (int i=0; i<size;i++){
        for (int j=0; j<size; j++){
            cout<<v[i][j];
            
        }cout<<endl;
    }
    
    
    
    return 0;
}
    