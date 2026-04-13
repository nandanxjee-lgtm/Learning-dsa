#include<iostream>
using namespace std;
int main(){
    int n = 6;
    //outer loop 1
    for(int i=0;i<n;i++){
     //space-1
     for(int j=0;j<(n-i-1);j++){
        cout<<" ";
     }
     cout<<"*";
     //space-2
     for(int j=0;j<(2*i-1);j++){
        cout<<" ";
     }
     if(i!=0){
        cout<<"*";
     }
     cout<<endl;

    }
    //outer loop 2
    for(int i=(n-1);i>0;i--){
        //space-1
        for(int j=0;j<(n-i);j++){
            cout<<" ";
        }
        cout<<"*";
        //space-2
        for(int j=0;j<(2*(i-1)-1);j++){
            cout<<" ";
        }
        if(i!=1){
            cout<<"*";
            cout<<endl;
        }

    }
    cout<<endl;
    return 0;
}
// g++ code.cpp && ./a.out