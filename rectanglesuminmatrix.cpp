#include<iostream>
#include<vector>
using namespace std;
void rectanglesum(vector<vector<int>>&v){
    
    int l1,l2,r1,r2;
    cout<<" enter the l1,l2,r1,r2;";
    cin>>l1>>r1>>l2>>r2;
    
    int sum=0;
    for (int i=l1;i<=l2;i++){
        for (int j=r1;j<=r2;j++){
            sum+=v[i][j];
        }
    }
    cout<<sum;
}


int main(){
    int e,n,m;
  

    cout<<"size:";
    cin>>n>>m;
    vector<vector<int> >v(n,vector<int>(m));
    
    
    cout<<" enter the numbers:"<<endl;
    for (int i=0; i<n;i++){
        for (int j=0; j<m; j++){
            cin>>e;
            v[i][j]=e;
        }
        cout<<endl;
    }
    rectanglesum(v);
    return 0;
}