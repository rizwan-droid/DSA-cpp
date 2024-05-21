#include <iostream>
using namespace std;

int primeCount(int* arr, int size){
     int nop=0;
    for(int i=0; i<size; i++){
        int nof=0;
       
        int num = arr[i];
        for(int div=2; div*div<=num;div++){
           
            if(num%div==0){
                nof++;
               
            }
        }
        if(nof==0){
             nop++;
        }
         
    }
   return nop;
}

int main(){
    int size;
    cin>>size;
    int* array =  new int[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int ans = primeCount(array,size);
    cout<<ans<<endl;
    return 0;
}