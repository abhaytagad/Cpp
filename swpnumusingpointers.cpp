#include<iostream>
using namespace std;

void swap(int *a,int *b){
    int c=*a;
    *a=*b;
    *b=c;
}
int main(){
     int x,y;
     cin>>x>>y;
     int *p1=&x;
     int *p2=&y;
     swap(p1,p2);
     cout<<x<<","<<y;
     return 0;
}
     