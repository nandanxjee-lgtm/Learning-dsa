#include<iostream>
using namespace std;
int main(){
    int n=4,num;
    char ch='A';
for(int i=0;i<n;i++){
    num=1;
    for(int j=0;j<=i;j++){
        
        cout<<num<<" ";
        num++;
    }
    cout<<endl;}
        return 0;
}
// g++ code.cpp && ./a.out