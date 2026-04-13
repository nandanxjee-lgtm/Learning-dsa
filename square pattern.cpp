#include<iostream>
using namespace std;
int main(){
    int n,a=1;
    char ch = 'A';
    cout<<"input the value of n -";
    cin>>n;
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
        cout<<ch<<" ";
        ch++;
       }
       cout<<endl;

    }
    return 0;
}
// g++ code.cpp && ./a.out