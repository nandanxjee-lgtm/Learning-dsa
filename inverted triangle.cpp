#include<iostream>
using namespace std;
int main(){
    int n=4,num=1;
    char ch='A';
for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        cout<<" ";}
    for(int k=n-i;k>0;k--){
        cout<<ch;
    }
    cout<<endl;
    ch++;}
        return 0;
}
// g++ code.cpp && ./a.out