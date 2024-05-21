#include<iostream>
#include<vector>
using namespace std;

int main(){
  int a[] = {1,2,4,7,8,6,4};
  int target = 12;
  
  for(int i=0; i<sizeof(a)/sizeof(int); i++){
    int element = a[i];
    for(int j=i+1; j<sizeof(a)/sizeof(int); j++){
      int value = a[j];
      for(int k=i+2; k<sizeof(a)/sizeof(int); k++){

      if(element + value +a[k] == target){
        cout<<a[i]<<a[j]<<a[k]<<" ";
         }
      }
      
    }
   
  }
 
  
  return 0;
}
