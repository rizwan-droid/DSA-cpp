#include <iostream>
using namespace std;

int span(int* arr,int size){
    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return max-min;
}

int main(){
    int size;
    cin>>size;
    int* array =  new int[size];
    for(int i=0; i<size; i++){
        cin>>array[i];
    }

    int ans = span(array, size);
    cout<<ans<<endl;
    return 0;
}