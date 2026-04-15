#include<iostream>
using namespace std;
int binary(int n){
    int ans=0, pow=1,rem;
    for(int i=0;n>0;n/=2){
            rem=(n%2)*pow;
            pow*=10;
            ans=ans+rem;

    }
    return ans;
}
int main(){
    cout<<binary(234)<<endl;
    return 0;
}


// g++ code.cpp && ./a.out