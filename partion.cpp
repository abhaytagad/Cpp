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
    int sum1=0,sum2;
    for (int i=0;i<size; i++){
        sum2=0;
        sum1=sum1+v[i];
        for (int j=i+1;j<size;j++){
            sum2=sum2+v[j];
        }
        //cout<<sum1<<","<<sum2<<endl;
        
        if (sum1==sum2){
            cout<<i<<" ";
            
        }
    }
    return 0;
        }
