#include<iostream>
#include<vector>
using namespace std;
int main(){
    /*vector<int>array;
    int num, n, a=0;
    cout<<"enter the size :";
    cin>>n;
    while (a<n){
        cout<<"enter the num:"<<endl;
        cin>>num;
        array.push_back(num);
        a++;
    } 
     
    for (int ele:array){
        cout<<ele<<endl; 
    }*/
    
    vector<int>v;
    v={1,2,3,4,6,7,8,9,4};
    v.insert(v.begin()+2,10);
    v.pop_back();
    v.erase(v.end()-3);
    
    for (int ele:v){
        cout<<ele<<endl; 
    }
    
  
    
    return 0;
}
    