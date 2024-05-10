#include <iostream>
using namespace std;

int main()
{
    //int arr[4] = [1,2,3,4]
    int* arr= new int[5];
    // int arr[5];
    for(int idx=0;idx<5;idx++){
        //for (int idx=0;idx<sizeof(arr)/size of(int);idx++)
        cin>>arr[idx];
    }
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
 return 0;
}