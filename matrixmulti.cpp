#include<iostream>
using namespace std;
int main(){
  
  
        int r,c;
        //cout<<" r:";
        r=2 ;
        c=2;
        //cout<<" c:";
        //cin>>c;
    
      int array1[r][c];
    
    int num;
    
    cout<<" enter the numbers:";
    for(int i=0;i<r;i++){
        for (int j=0; j<c; j++){
        
            cin>>num;
            array1[i][j]=num;
        }
        
        
    }
    int array2[r][c];
    
    
    
    cout<<" enter the numbers:";
    for(int i=0;i<r;i++){
        for (int j=0; j<c; j++){
        
            cin>>num;
            array2[i][j]=num;
        }
        
        
    }for (int i=0; i<r;i++){
        for (int j=0; j<c; j++){
            cout<<array1[i][j]<<" ";
        }cout<<endl;
    }
    
    for (int i=0; i<r;i++){
        for (int j=0; j<c; j++){
            cout<<array2[i][j]<<" ";
        }cout<<endl;
    }
    int sum;
    int mul[r][c];
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            sum=0;
            for (int k=0;k<r;k++){
                sum+=array1[][k]*array2[k][j];
            }mul[i][j]=sum;
        }
    }
    for (int i=0;i<r; i++){
                for (int j=0;j<c;j++){
                    cout<<mul[i][j]<<" ";
                }cout<<endl;
    }
                
   
    
    
    
    return 0;
}