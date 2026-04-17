#include<iostream>
using namespace std;
int linearsearch(int arr[], int size,int target){
     
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[]={4,2,7,8,1,2,5},size=7 , target=5;
    cout<<"target value is at index->  "<<linearsearch(arr,size,target)<<endl;
    
    return 0;
}
//g++ code.cpp && ./a.out