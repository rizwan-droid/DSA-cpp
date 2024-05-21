#include<iostream>
#include<vector>
using namespace std;

int main(){
  int a[] = {1,2,4,7,8,6,4};
  int target = 8;
  
  for(int i=0; i<sizeof(a)/sizeof(int); i++){
    int element = a[i];
    for(int j=i+1; j<sizeof(a)/sizeof(int); j++){
      if(element + a[j] == target){
        cout<<a[i]<<a[j]<<" ";
         }
    }
  }
 
  
  return 0;
}
