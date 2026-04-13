#include<iostream>
using namespace std;
int main(){
    int n=6,num=1;
    char ch;
for(int i=0;i<n;i++){
    ch='A';
    //space
    for(int j=0;j<(n-(i+1));j++){
        cout<<" ";}
    ch--;
    //inc characters
    for(int j=0;j<i+1;j++){
        cout<<++ch;
    }
    //dec characters
    for(int j=0;j<i;j++){
        cout<<--ch;
    }
    cout<<endl;
    ch++;}
        return 0;
}
// g++ code.cpp && ./a.out
