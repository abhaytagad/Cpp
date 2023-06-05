#include<iostream>
using namespace std;
int main(){
  
  
        int r,c;
        cout<<" r:";
        cin>>r;
        
        cout<<" c:";
        cin>>c;
    
      int array1[r][c];
    
    int num;
    
    cout<<" enter the numbers:";
    for(int i=0;i<r;i++){
        for (int j=0; j<c; j++){
        
            cin>>num;
            array1[i][j]=num;
        }
    }int array[c][r];
    for (int i=0; i<r; i++){
        
        for(int j=0; j<c;j++){
            array[j][i]=array1[i][j];
        }
    }
    for (int i=0; i<c; i++){
        for(int j=0; j<r;j++){
            cout<<array[i][j]<<" ";
        }cout<<endl;
    }
        return 0;
}