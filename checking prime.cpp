#include <iostream>
using namespace std;
int main() {
    int n;
    bool isprime = true;
cout<<"input the number to be checked - ";
cin>>n;
for(int i=2;i*i<=n;i++){
    if(n%i==0){
        isprime = false;
        break ;
    }
}
if(isprime == true){
    cout<<"\nnumber is prime\n";
}
else{
    cout<<"\nnumber is  not prime"<<endl;
}

return 0;
}
// g++ code.cpp && ./a.out
