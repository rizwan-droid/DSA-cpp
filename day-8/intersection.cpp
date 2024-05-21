#include<iostream>
#include<vector>
using namespace std;

int main(){
  int a[] = {1,2,4,2,3,5,6,7};
  int b[] = {2,4,5,3,9,11,23};
  vector<int>ans;
  for(int i=0; i<sizeof(a)/sizeof(int); i++){
    int element = a[i];
    for(int j=0; j<sizeof(b)/sizeof(int); j++){
      if(element == b[j]){
        ans.push_back(a[i]);
        b[j] = -1;      }
    }
  }
  for(int i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
  
  return 0;
}
