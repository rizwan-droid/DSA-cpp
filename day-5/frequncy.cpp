#include <iostream>
using namespace std;

int frequncy(int* arr, int tar, int size){
    int freq = 0;
    for(int i=0; i<size; i++){
        if(arr[i]==tar){
            freq++;
        }
    }
    return freq;
}

int main(){
    int size;
    cin>>size;
    int* array =  new int[size];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    int ans = frequncy(array, 5, size);
    cout<<ans<<endl;
    return 0;
}