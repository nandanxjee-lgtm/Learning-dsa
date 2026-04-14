#include<iostream>
using namespace std;
int factorialofn(int n){
    int fact=1;
    if(n==0 || n==1){
        return 1;
    }
    else 
     for(int i=2;i<=n;i++){
        fact*=i;

     }
    return fact;
}
int main(){
    cout<<factorialofn(8)<<endl;
    cout<<factorialofn(0);
    cout<<endl;

    return 0;
}



// g++ code.cpp && ./a.out