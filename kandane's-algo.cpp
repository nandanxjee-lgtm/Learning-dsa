#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int ar[]={3,-4,5,4,-1,7,-8};
    // BRUTFORCE_APPROACH
    int maxSum=__WINT_MIN__;
    // for(int st=0;st<6;st++){
    //     int sum=0;
    //     for(int en=st;en<6;en++){
    //         sum+=ar[en];
    //         maxSum=max(maxSum,sum);
    //     }
    // }
    // cout<<"max sum is: "<<maxSum<<endl;

    // kandane's algorithm
    int sum=0;
    for(int i=0;i<7;i++){
        sum+=ar[i];
        maxSum=max(maxSum,sum);
        if(sum<0){
            sum=0;
        }
    }
    cout<<"max sum is: "<<maxSum<<endl;
 
    return 0;
}
// g++ code.cpp && ./a.out