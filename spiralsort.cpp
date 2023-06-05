#include<iostream>
#include<vector>
using namespace std;
void spiral(vector<vector<int> >& v){
    int top,bottom,right,left ;
    top=0;
    right=v[0].size()-1;
    left=0;
    bottom=v.size()-1;
    int direction=0;
    while (left<=right && top<=bottom){
        if (direction==0){
            for (int i=left;i<=right;i++){
                cout<<v[left][i]<<" ";
            }top++;
            direction++;
            
        }else if (direction==1){
            for (int i=top; i<=bottom;i++){
                cout<<v[i][right]<<" ";
            }right--;
            direction++;
            
        }else if (direction==2){
            for (int i=right;i>=left;i--){
                cout<<v[bottom][i]<<" ";
            }bottom--;
            direction++;
            
        }else {
            for (int i=bottom; i>=top; i--){
                cout<<v[i][left]<<" ";
            }left++;
            direction++;
            
        }
        direction=(direction)%4;
    }
    } 
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
    spiral(v);
    return 0;
}
