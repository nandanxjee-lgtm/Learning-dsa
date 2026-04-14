#include<iostream>
using namespace std;
int sumofdigit(long int n){
    int sum=0;
    for(int i=10;n>0;n/=i){
        sum+=(n%i);
        // n=n/i;
        // if(n==0){
        //     break;
        // }

    }
    return sum;
}
int ncr(int n,int r){
    int nr=1,dr=1,k=r;
    for(int i=0;i<k;i++){
        nr*=n;
        n--;
        dr*=r;
        r--;
    }
    
    return nr/dr;
}
int checkprime(int a){
    if(a==0||a==1){
        return 0;
    }
    for(int i=2;i*i<=a;i++){
        if(a%i==0){
            return 0;
        }
    }
    return 1;
}
int prntprime(int n){
    if(n==0||n==1||n==2){
        cout<<"no prime number exist in between";
        return 0;
    }
    for(int i=3;i<=n;i++){
        if(checkprime(i)==1){
            cout<<i<<"  ";
        }
    }
    cout<<endl;
    return 0;
}
int nthfibbo(int n){
    if(n==0){
        return 0;
    }
    else if(n==1||n==2){
        return 1;
    }
    return nthfibbo(n-1)+nthfibbo(n-2);
}

int main(){
    cout<<sumofdigit(647353783645);
    cout<<endl;
    cout<<ncr(5,2)<<endl;
    prntprime(89);
    cout<<nthfibbo(6)<<endl;

    return 0;
}
