#include<iostream>
using namespace std;
//pass by referance
void changeArr(int arr[], int size){
    for(int i=0;i<size;i++){
        arr[i]= 2*arr[i];
    }
}
int main(){
    int arr[]={1,2,3};
    int smallest= __INT_MAX__;
    int marks[5]={456,776,767,8676,766};
    int largest= marks[0],index_min,index_max;
    for(int i=0;i<5;i++){
        if(marks[i]<smallest){
            index_min=i;
        }
        if(marks[i]<largest){
            index_max=i;
        }
      smallest= min(marks[i],smallest);
      largest=max(largest,marks[i]);
    }
    changeArr(arr,3);
    for(int i=0;i<3;i++){
        cout<<arr[i]<<", ";
    }
cout<<"smallest number is =  "<<smallest<<" at the index->"<<index_min<<endl;
cout<<"largest number is =  "<<largest<<" at the index->"<<index_max<<endl;
    return 0;
}

// g++ code.cpp && ./a.out