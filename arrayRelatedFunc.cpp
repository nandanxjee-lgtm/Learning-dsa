#include<iostream>

using namespace std;
//waf to calc sum and product of all numbers in an array
int sumProduct(int arr[],int size){
    int sum=0,product=1;
    for(int i=0;i<size;i++){
        sum+=arr[i];
        product*=arr[i];
    }
    cout<<"sum= "<<sum<<endl;
    cout<<"product="<<product<<endl;
    return sum , product ;
}
void swapMaxMin(int arr[],int size){
    int greatest=arr[0],smallest=arr[0],index_max,index_min;
    for(int i=0;i<size;i++){
        if(arr[i]>greatest){
            index_max=i;
            greatest=arr[i];
        }
        if(arr[i]<smallest){
            index_min=i;
            smallest=arr[i];
        }
           
    }
    swap(arr[index_max],arr[index_min]);

}
void uniqueval(int arr[],int size){
    
    for(int i=0;i<size;i++){
        bool unique=true;

        for(int j=0;j<size;j++){
            if(i==j){
                continue;
                
            }
            else{
                if(arr[i]==arr[j]){
                    unique=false;
                }
                
            }
            
        }
        if(unique==true){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    
   int arr[]={5,6,7,5,67,5,8,6};
   int size=8;
   sumProduct(arr,size);
   uniqueval(arr,size);

    return 0;
}