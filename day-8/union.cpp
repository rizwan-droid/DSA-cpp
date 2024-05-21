#include <iostream>
#include <vector>
using namespace std;

int main(){
  int a[] = {1,4,5,7,9};
  int b[] = {2,6,10,12};
  vector<int>ans;
  for(int i=0; i<sizeof(a)/sizeof(int);i++){
    ans.push_back(a[i]);
}
  for(int i=0; i<sizeof(b)/sizeof(int);i++){
      ans.push_back(b[i]);
  }
  for(int i=0; i<ans.size();i++){
    cout<<ans[i]<<"  ";
  }
  
  return 0;
}