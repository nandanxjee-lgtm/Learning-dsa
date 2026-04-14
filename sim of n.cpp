#include<iostream>
using namespace std;
int sumofn(int n){
    int s=0;
    for(int i=1;i<+n;i++){
        
        s+=i;
    }
    return s;
}
int main(){
    cout<<"enter the value of n -\n";
    int n;
    cin>>n;
    cout<<sumofn(n);
    cout<<endl;

    return 0;
}



// g++ code.cpp && ./a.out