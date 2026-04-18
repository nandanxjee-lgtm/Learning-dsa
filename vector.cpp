#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char> vec = {1,2,3,4,5,6,7};
  cout<<"i am nandan singh\n";
  cout<<"size-"<<vec.size()<<endl;
//   vec.pop_back();
  vec.push_back(9);
  cout<<vec.size()<<endl;
  cout<<vec.capacity()<<endl;
  cout<<vec[0]<<endl;
//   for(char val : vec){
//     cout<<val<<endl;
//   }
  return 0;
}

// g++ -std=c++11 code.cpp && ./a.out