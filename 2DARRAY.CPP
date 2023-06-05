#include<iostream>
using namespace std;
int main(){
  
  
        int r,c;
        cout<<" r:";
        cin>>r;
        cout<<" c:";
        cin>>c;
    
      int array[r][c];
    
    int num;
    
    cout<<" enter the numbers:";
    for(int i=0;i<r;i++){
        for (int j=0; j<c; j++){
        
            cin>>num;
            array[i][j]=num;
        }
        
        
    }
    
    
    for (int i=0;i<r;i++){
        for (int j=0; j<c;j++){
            cout<<array[i][j]<<" ";
        }
    }
    
    return 0;
}