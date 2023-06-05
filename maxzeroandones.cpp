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
    int flag=0;
    for (int i=0; i<size;i++){
        
        for (int j=0; j<size; j++){
            if (v[j][i]==true){
                for (int k=0; k<size; k++){
                    cout<<v[j][k]<<" ";
                }cout<<endl;
                flag=1;
            }
            
                
            }if (flag==1){
                break;
            }
        }
        
    
    
    return 0;
}
    