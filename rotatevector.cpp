#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v={1,2,3,4,5};
    int k;
    cin>>k;
    int count=0;
    k=k%v.size();
     while (count<k){
         v.insert(v.begin(),v[4]);
         v.pop_back();
         count++;
     }
     for(int i=0;i<v.size();i++){
         cout<<v[i]<<endl;
     }
}