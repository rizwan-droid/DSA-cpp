#include <iostream>
#include <vector>
using namespace std;

int main(){
  int n;
  cin>>n;

  vector<int>arr(n);
  for(int i=0; i<arr.size();i++){
    cin>>arr[i];
  }

  for(int i=0; i<arr.size();i++){
    cout<<arr[i]<<endl;
  }
}