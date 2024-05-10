#include <iostream>
using namespace std;
int binarysearch(int* arr,int size,int tar){
    int start=0;
    int end =size-1;
    
    
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==tar){
            return start;
        }
        else if(arr[mid]<tar){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}

int main()
{
    int size;
    cin>>size;
    int* array = new int[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    
    int target;
    cin>>target;
    
    int ans=binarysearch(array,size,target);
    cout<<ans<<endl;

    return 0;
}