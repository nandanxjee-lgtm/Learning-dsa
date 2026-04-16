#include<iostream>
using namespace std;
int dec2binary(int n){
    int ans=0, pow=1,rem;
    for(int i=0;n>0;n/=2){
            rem=(n%2)*pow;
            pow*=10;
            ans=ans+rem;

    }
    return ans;
}
int binary2dec(int n){
    int pow=1,ans=0;
    for(int i=0;n>0;n/=10){
        ans+=(n%10)*pow;
        pow*=2;   
    }
    return ans;
}
int main(){
    cout<<binary2dec(110010)<<endl;
    return 0;
}


// g++ code.cpp && ./a.out