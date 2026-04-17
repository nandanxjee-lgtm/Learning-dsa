#include<iostream>
using namespace std;
void reversearr(int arr[], int size){
    int start=0,end=size-1;
    for(start;start<end;start++){
        swap(arr[start],arr[end]);
        end--;
        
    }
}

int main(){
    int arr[]={4,2,7,8,1,2,5},size=7;
    reversearr(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
    
    return 0;
}
//g++ code.cpp && ./a.out