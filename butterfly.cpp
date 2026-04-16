#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n-";
    cin>>n;
    //outerloop_1
    for(int i=0;i<n;i++){
        //star
        for(int j=0;j<(i+1);j++){
            cout<<"*";
        }
        //space
        for(int j=2*(n-i-1);j>0;j--){
            cout<<" ";
        }
        //star
        for(int j=0;j<(i+1);j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    //outerloop_2
    for(int i=0;i<n;i++){
        //star
        for(int j=(n-i);j>0;j--){
            cout<<"*";
        }
        //space
        for(int j=2*i;j>0;j--){
            cout<<" ";
        }
        //star
        for(int j=(n-i);j>0;j--){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}
//g++ code.cpp && ./a.out