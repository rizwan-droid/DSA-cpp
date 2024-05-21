#include<iostream>
#include<vector>
using namespace std;

int main(){
  //1st method
  vector<int>arr{10,20,30,40,50};
  cout<<arr.size()<<endl;
  cout<<arr.capacity()<<endl;
  //size
  //capacity

  //2nd method
  vector<int>brr(10,-1);
  cout<<brr.size()<<endl;
  cout<<brr.capacity()<<endl;

  brr.push_back(20);
  //add at last
  for(int i=0;i<brr.size();i++){
    cout<<brr[i]<<endl;
  }

  brr.pop_back();
  //delete from last
  //capacity remains same
  return 0;
}