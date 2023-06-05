#include<iostream>
using namespace std;
int main(){
    char num;
    cout<<"enter the num";
    cin>>num;
    if ((num=='a')or (num=='e') or (num=='o') or (num=='i') or (num=='u')){
        cout<< " num is vowel"<<endl;
    }else{
        cout<<" num is a consonant"<< endl;
    }
            
    return 0;
}