#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v={1,2,3,4,5,6,8,9,7};
    int x;
    cout<<"enter the ele:";
    cin>>x;
   int count=0;
    for (int ele:v){
        if (ele==x){
            count+=1;
        }
    }cout<<"occurence of num:"<<count;
    return 0;
}